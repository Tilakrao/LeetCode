class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();

        int right =1,left = 0;
        while (right < size)
        {
            if ((nums[left] != nums[right]) && (right - left == 1))
            {
            left++;
            right++;
            }
            else if (nums[left] == nums[right])
            {
            right++;
            }
            else
            {
            nums[++left] = nums[right++];
            }
        }


    return left + 1;
        
    }
};