class Solution {
public:
    
    int pall_sub(string s,int i,int j)
    {
        int count = 0;
        while(i >= 0 && j < s.length() && s[i] == s[j] )
        {
            count++;
            i--;
            j++;
        }
        return count;
    }
    
    
    
    int countSubstrings(string s) {
        int count = 0;
         for(int mid = 0;mid<s.length();mid++)
         {
             int i = mid;
             int j = mid;
             
             int count_odd = pall_sub(s,i,j);
             i = mid;
             j = mid + 1;
             
             int count_even = pall_sub(s,i,j);
                
             count = count + count_odd + count_even;
         }
        return count;
        
    }
};