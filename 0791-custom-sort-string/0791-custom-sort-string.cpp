string odr; 
class Solution {
public:
    
    static bool cmp(char a, char b)
        {
            return odr.find(a) < odr.find(b);
        };
    
    string customSortString(string order, string s) {
        odr = order;
        sort(s.begin(),s.end(),cmp);
        return s;
    }
};