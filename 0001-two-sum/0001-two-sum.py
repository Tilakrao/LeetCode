class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i, k in enumerate(nums):
            for j, v in enumerate(nums):
                if k + v == target and i != j:
                    return list([i, j])
        