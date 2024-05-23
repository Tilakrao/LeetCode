class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int sum = 0;
        for (int i = 1 ; i < size+1 ;i++)
            sum += i;
        for (int i = 0 ; i < size ;i++)
            sum = sum - nums[i];
        return sum;
        
    }
};