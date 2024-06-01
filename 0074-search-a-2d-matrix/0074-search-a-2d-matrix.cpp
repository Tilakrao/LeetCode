class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        int n = row * col;
        
        int start = 0;
        int end = n-1;
        
        while(start<=end)
        {
            int mid = start + (end-start)/2;
            
            int rowind = mid/col;
            int colind = mid%col;
            
            if (matrix[rowind][colind] == target)
            {
                return true;
            }
            else if ( matrix[rowind][colind] < target )
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return false;
        
    }
};