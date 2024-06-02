class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
        {
            return INT_MAX;
        }
        
        long long int start =  0;
        long long int end = abs(dividend);
        long long int mid = start + (end - start)/2;
        long long int ans = -1;
        
        while(start<=end)
        {
                        
            if ((abs(divisor) * mid) <= abs(dividend))
            {
                ans = mid;
                start = mid +1;
            }
            else
            {
                end = mid - 1; 
            }
            mid = start + (end - start)/2;
        }
        if((dividend <0 && divisor>0) || (dividend >0 && divisor<0)) 
        {
            ans = 0-ans;
        }
        return ans;
       
        
    }
};