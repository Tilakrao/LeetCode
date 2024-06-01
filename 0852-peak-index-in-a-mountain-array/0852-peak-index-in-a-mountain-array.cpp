class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        long int start = 0;
        long int end = arr.size() - 1;
        
        long int mid = start + (end-start)/2;
        
        while(start <= end)
        {
            if (arr[mid] >= arr[mid+1] && arr[mid] >= arr[mid-1]   )
            {
                break;
            }
            else if ( arr[mid] >arr[mid-1])
            {
                start = mid ;
            }
            else
            {
                end = mid ;
            }
           mid = start + (end-start)/2; 
        }
        
        
        return (int)mid;
        
    }
};