class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        lst = []
        i = 0
        j = 0
        k = 0
        
        while i <= len(nums1) - 1 and j <= len(nums2) - 1:
            if nums1[i] <= nums2[j]:
                lst.append(nums1[i])
                i += 1
                
            else:
                lst.append(nums2[j])
                j += 1
                
        if i <= len(nums1) - 1:
            lst += nums1[i:]
        
        if j <= len(nums2) - 1:
            lst += nums2[j:]
            
        if len(lst) % 2 != 0:
            return (lst[len(lst)//2])/1
        else:
            return (lst[(len(lst)//2)-1] + lst[(len(lst)//2)])/2
        