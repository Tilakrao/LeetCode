class Solution {
public:
    
    
    bool po_sol(vector<int>& weights, int days,int mid)
    {
        
        
        int sum = 0;
        int day_count = 1;
        
        for(int i = 0; i < weights.size();i++)
        {
            if (weights[i] > mid) {
                return false;
            }
            
            if (sum + weights[i] > mid)
            {
                day_count ++;
                sum = weights[i];
                if (day_count > days)
                {
                    return false;
                }
            }
            else
            {
                sum += weights[i];
            }
        }
        
        return true;
    }
    
    
    int shipWithinDays(vector<int>& weights, int days) {
    
        int start = 0;
        int end = accumulate(weights.begin(),weights.end(),0);
        int solution = INT_MAX;
        
        while(start<=end)
        {
            int mid = start + ((end-start)/2);
            if (po_sol(weights,days,mid))
            {
                solution = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return solution;
    }
};