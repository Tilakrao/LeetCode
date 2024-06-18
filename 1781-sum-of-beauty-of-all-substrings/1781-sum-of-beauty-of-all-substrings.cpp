class Solution {
public:
    int beautySum(string s) {  
        int ans = 0;
        for( int i = 0;i<s.length();i++)
        {
            for(int j = i;j<s.length();j++)
            {
                int start = i;
                int end = j;
                vector<int> alpha(26,0);
                
                while(start <= end)
                {
                    alpha[s[start] - 'a']++;
                    start++;
                }
                int maxi = *max_element(alpha.begin(),alpha.end());
                int mini = INT_MAX;
                for (int k = 0;k<alpha.size();k++)
                {
                    if(alpha[k]!=0)
                    {
                        if(mini > alpha[k])
                        {
                            mini = alpha[k];
                        }
                    }
                }
                ans += (maxi-mini);
                
            }
        }
        return ans;
        
    }
};