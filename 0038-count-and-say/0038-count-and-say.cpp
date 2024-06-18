class Solution {
public:
    string countAndSay(int n) {
        if(n == 1)
        {
            return "1";
        }
        if (n == 2)
        {
            return "11";
        }
        
        string s = "11";
        int i;
        
        while(n-2)
        {
            char ch =s[0];
            string ans = "";
            int count = 1;
            
            for(i=1;i<s.length();i++)
            {
                if (ch == s[i])
                {
                    count++;
                }
                else
                {
                    ans = ans + to_string(count) + ch;
                    count = 1;
                    ch = s[i];

                }

                if(i == s.length() - 1)
                {
                    ans += to_string(count) + ch;
                }
            }
            
            s = ans;
            n--;
        }
        return s;
        
    }
};