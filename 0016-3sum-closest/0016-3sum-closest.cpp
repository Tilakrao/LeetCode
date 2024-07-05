class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        
        int min_sum = nums[0] + nums[1] + nums[2];
        
        for(int i = 0; i<nums.size()-2;i++)
        {
            int start = i+1;
            int end = nums.size()-1;
            
            while(start < end)
            {
               int summ = nums[i] + nums[start] + nums[end] ;
                
                if(summ > target)
                {
                    end--;
                }
                else
                {
                    start++;
                }
                if(abs(summ - target) < abs(min_sum - target))
                {
                    min_sum = summ;
                }
            } 
        }
        return min_sum;
    }
};