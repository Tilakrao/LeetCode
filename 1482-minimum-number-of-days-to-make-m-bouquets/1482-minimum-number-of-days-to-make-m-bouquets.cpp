class Solution {
public:
    bool isposible(vector<int>& bloomDay, int m, int k, int mid)
    {
        int counter = 0;
        
        for(int i =0; i<bloomDay.size();i++)
        {
            if (bloomDay[i] <= mid)
            {
                counter++;
                if (counter == k)
                {
                    m--;
                    counter = 0;
                    if (m == 0)
                    {
                        break;
                    }
                }
            }
            else//not bloomed
            {
                counter = 0;
            }
        }
        
        return m == 0;
        
    }
    
    
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        int ans = -1;
        long long int a = (long long int)m   *  (long long int)k;
        
        if ( a > bloomDay.size())
        {
            return ans;
        }
        
        int start = 1;
        int end = *max_element(bloomDay.begin(),bloomDay.end());
        
        while(start<=end)
        {
            int mid = start + (end - start)/2;
            if (isposible(bloomDay,m,k,mid))
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

    return ans;
        
    }
};