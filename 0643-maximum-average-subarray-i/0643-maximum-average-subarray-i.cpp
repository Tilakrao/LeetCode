class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int window_avg = 0;
        int i = 0, j= k;
        for(int r = 0; r<k;r++)
        {
            window_avg += nums[r];
        }
        int ans= window_avg;
        while ( j < nums.size() )
        {
            int temp = (window_avg - nums[i]) + nums[j];
            if (temp > ans){
            ans = temp;
            }
            window_avg =(window_avg - nums[i]) + nums[j];
            i++;
            j++;
        }

        return (double)ans/(double)k;
        
    }
};