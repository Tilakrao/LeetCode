class Solution {
public:
    int first(vector<int>& arr, int target){

        int s=0;
        int e=arr.size() - 1;
        int mid = s + ((e-s)/2);
        int index =-1;

        while (e>=s)
        {
            if (arr[mid] == target){
                index = mid;
                e = mid-1;

            }
            else if(arr[mid] > target)
            {
                e = mid-1;
            }
            else
            {
                s = mid +1;
            }
            mid = s + ((e-s)/2);
        }
        return index;
    }
    int last(vector<int>& arr, int target){

        int s=0;
        int e=arr.size() - 1;
        int mid = s + ((e-s)/2);
        int index =-1;

        while (e>=s)
        {
            if (arr[mid] == target){
                index = mid;
                s = mid+1;

            }
            else if(arr[mid] > target)
            {
                e = mid-1;
            }
            else
            {
                s = mid +1;
            }
            mid = s + ((e-s)/2);
        }
        return index;
    }





    vector<int> searchRange(vector<int>& nums, int target) {

       vector<int> arr = {first(nums,target) ,last(nums,target) };
       return arr;
        
    }
};