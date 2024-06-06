class Solution {
public:
    string removeDuplicates(string s) {
        
        string str = "";        
        for(int i = 0;i<s.length();i++)
        {
            char ch = s[i];
            if (str.empty())
            {
                str.push_back(ch);
            }
            else if (str.back() == ch)
            {
                str.pop_back();
            }
            else
            {
                str.push_back(s[i]);
            }
        }
        return str;
    }
};