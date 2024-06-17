class Solution {
public:
    
    int peak(vector<int>& nums)
    {
        int start = 0;
        int end = nums.size() - 1; 
        
        while(start <= end)
        {
            int mid = start + (end - start)/2;
            if (mid + 1 < nums.size() && nums[mid] < nums[mid+1])
            {
                 start = mid + 1;
            }
            else if (mid - 1 >= 0 && nums[mid-1] > nums[mid] )
            {
                end = mid - 1 ;
            }
            else 
            {
                return mid;
            }
            
           
        }
        return -1;
    }
    
    int findPeakElement(vector<int>& nums) {
        return peak(nums);
    }
};