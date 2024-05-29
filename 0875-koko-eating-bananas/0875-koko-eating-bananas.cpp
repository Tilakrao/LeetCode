class Solution {
public:
    bool funtion(vector<int>& arr,int mid,int target)
  {
      long int total=0;
      for (int i = 0; i<arr.size();i++)
      {
          total += ceil((double)arr[i] / (double)mid);
      }
      return (total  <= target );
  }
  
  
  
  int binary(vector<int>& arr,int start,int end,int target)
  {
      
      while(start <= end)
      {
          int mid = (start + end)/2;
        //   cout<<start<<" "<<mid << " "<<end<<endl;
        //   cout<<mid<<" "<< funtion(arr,mid) <<" "<<target<<endl;
          if (funtion(arr,mid,target))
          {
              end = mid -1;
          }
          else
          {
              start = mid +1;
          }
          
          
         
      }
      
      return start;
  }
    int minEatingSpeed(vector<int>& piles, int h) {
       
        int max = INT_MIN;
        int j = piles.size() -1;
        while (j>=0){
            if (max < piles[j])
            {
                max = piles[j];
            }
            
            j--;
        }
        
        
        return binary(piles,1,max,h);
        
    }
};