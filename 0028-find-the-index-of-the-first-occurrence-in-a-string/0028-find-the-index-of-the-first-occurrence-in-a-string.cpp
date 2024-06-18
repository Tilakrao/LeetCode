class Solution {
public:
    int strStr(string haystack, string needle) {
        
        for( int i = 0; i < haystack.length();i++)
        {
            if(haystack[i] == needle[0] )
            {              
                if (haystack.substr(i,needle.length()).compare(needle) == 0)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};