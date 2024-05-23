class Solution {
public:
    int summ(vector<int>& arr,int start,int end)
    {
        int sum = 0;
        for (int i = start;i < end; i++)
        {
            sum += arr[i];
        }
        return sum;
    }

    
    int pivotIndex(vector<int>& nums) {

        int size = nums.size(); 


        for (int i = 0;i<size; i++)
        {
            if (summ(nums,0,i) == summ(nums,i+1,size)){
                return i;
            }

         }
         return -1;
    }
    
};