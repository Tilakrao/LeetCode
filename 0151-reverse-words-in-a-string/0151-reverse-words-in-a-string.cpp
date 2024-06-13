class Solution {
public:
    string reverseWords(string s) {
        
        string ans = "";
    int i = 0;
    while(i < s.length())
    {
        while(i < s.length() && s[i] == ' ')
        {
            i++;
        }
        if (i >= s.length())
        {
            break;
        }
      
        int j = i + 1;

        while(j < s.length() && s[j] != ' ')
        {
            j++;
        }

        if (ans.length() != 0)
        {
            ans = s.substr(i,j-i) + " " + ans;
        }
        else
        {
            ans = s.substr(i,j-i);
        }
        i = j;
    }
    return ans;
        
    }
};