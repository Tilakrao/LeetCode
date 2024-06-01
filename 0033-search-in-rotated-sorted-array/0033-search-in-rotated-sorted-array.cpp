class Solution {
public:
    
    int binary(vector<int>& nums, int target,int start,int end)
    {
        while(start<=end)
        {
            int mid = start + (end-start)/2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if ( nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return -1;
    }
    
    int find_pivot(vector<int>& nums)
    {
        
        int start  = 0;
        int end = nums.size() - 1;
        int n = nums.size() ;
        
        
        while(start <= end)
        {
            int mid = start + (end - start)/2;
            
            if (start == end)
            {
                return start;
            }
            //////////////
            
            if (mid+1 < n && nums[mid] > nums[mid+1])
            {
                return mid;
            }
            /////////////
            if (nums[start] > nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
            
            
            
        }
        
        
        
        return -1;
    }
    
    
    int search(vector<int>& nums, int target) {
        
        
        int ans = -1;
        
        int pivot = find_pivot(nums);
        
        if (target >= nums[0] && target <= nums[pivot])
        {
            ans = binary(nums,target,0,pivot);
        }
        else
        {
            ans = binary(nums,target,pivot + 1,nums.size() - 1);
        }
        return ans;
        
        
    }
};