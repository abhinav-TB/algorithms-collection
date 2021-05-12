class Solution:
    def minSubsequence(self, nums):
        nums = sorted(nums)
        res = []
        s = sum(nums)
        while s >= sum(res):
            r = nums.pop()
            res.append(r)
            s = s - r
        return res
        
