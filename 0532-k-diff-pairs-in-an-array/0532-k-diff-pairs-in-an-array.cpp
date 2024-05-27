class Solution {
public:
    
    int binary_serch(vector<int>&nums,int start,int x)
    {
        int end = nums.size()-1;
        while(start<=end)
        {
            int mid = start+ ((end-start)/2) ;
            
            if (nums[mid] == x)
            {
                return mid;
            }
            else if (x > nums[mid])
            {
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }
        }
        return -1;
    }
    
    
    
    int findPairs(vector<int>& nums, int k) {
        set<pair<int,int>>sp;
        sort(nums.begin(),nums.end());
        
        for(int i = 0;i<nums.size();i++)
        {
            if (binary_serch(nums,i+1,nums[i] + k)  != -1)
            {
                sp.insert({nums[i],nums[i] + k});
            }
        }
        
        return sp.size();
        
    }
};