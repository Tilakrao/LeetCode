class Solution {
public:
    int mySqrt(int x) {
        int start = 0;
        int end = x;
        long long int mid = start + (end - start)/2;
        int ans = -1;
        
        while(start <= end)
        {
            long long int pro = mid*mid;
            
            if (pro <= x  )
            {   
                ans = mid;
             
                start = mid +1;
                
            }
            else
            {
                end = mid -1;
            }
                
                
                
            mid = start + (end - start)/2;
        }
        
        return ans;
        
        
    }
};