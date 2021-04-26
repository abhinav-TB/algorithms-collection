class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        
        stack = deque()
        dict= {}
        
        for n in nums2 :
            while(stack and stack[-1] < n):
                dict[stack.pop()] = n
                
            stack.append(n)
        
        while(stack):
            dict[stack.pop()] = -1
            
        for i , n in enumerate(nums1):
            nums1[i] = dict[n]
            
        return nums1
            
