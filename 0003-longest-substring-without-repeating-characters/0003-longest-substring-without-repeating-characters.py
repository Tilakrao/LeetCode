class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        st = ''
        lenst = 0
        if len(s) == 1:
            return 1
        
        for i in range(len(s)-1):
            st = s[i]
            for j in range(i+1,len(s)):
                if s[j] not in st:
                    st += s[j]
                    lenst = max(len(st),lenst)
                else:
                    lenst = max(len(st),lenst)
                    break
        return lenst
        