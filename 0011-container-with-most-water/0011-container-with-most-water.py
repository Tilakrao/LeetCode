class Solution:
    def maxArea(self, height: List[int]) -> int:
        i = 0
        j = len(height) - 1
        maxwater = 0
        while (i < j):
            maxwater = max( (j-i) * min(height[i] , height[j]) , maxwater)
            if height[i] > height[j]:
                j -= 1
            else:
                i += 1
        return maxwater
                


        