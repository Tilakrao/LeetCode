class Solution {
public:
    
    
    bool isposible(vector<int>& position, int m, int mid)
    {
        int last_pos = position[0];
        int count = 1;
        for (int i = 0;i<position.size();i++ )
        {
            if ((position[i] - last_pos) >= mid)
            {
                last_pos = position[i];
                count++;
                if(count == m)
                {
                    return true;
                }
            }
            
        }
        return false;
    }
    
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int start = 0;
        int end = position[position.size() - 1];
        int ans = -1;
            
            
            while(start <= end)
            {
                int mid = start + (end - start)/2;
                
                    if (isposible(position,m,mid))
                    {
                        ans = mid;
                        start = mid + 1;
                        
                    }
                    else
                    {
                        end = mid - 1;
                    }
                
            }
        return ans;
        
    }
};