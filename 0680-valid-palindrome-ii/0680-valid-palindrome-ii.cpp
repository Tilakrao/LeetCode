class Solution {
public:
    
    bool check(string s,int i,int j)
    {
        while(i <= j)
        {
            if(s[i] == s[j])
            {
                i++;
                j--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        
        int i = 0;
        int j = s.length() -1;
        
        while(i<=j)
        {
            if (s[i] == s[j])
            {
                i++;
                j--;
            }
            else
            {
                bool ans_one = check(s,i,j-1);
                bool ans_two = check(s,i+1,j);
                return ans_one || ans_two;
            }
        }
        
        return true;
        
    }
};