class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        return not len(nums) == len(set(nums))
