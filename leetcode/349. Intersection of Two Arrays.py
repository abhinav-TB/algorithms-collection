class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        nums1.sort() 
        nums2.sort()
        ans = set()
        i , j = 0 , 0
        while(i < len(nums1) and j < len(nums2)):
            if nums1[i] == nums2[j]:
                ans.add(nums1[i])
                i = i + 1
                j = j + 1
                
            elif nums1[i] > nums2[j]:
                j = j + 1
                
            elif nums1[i] < nums2[j]:
                i = i + 1
               
        return list(ans)                
                
            
            
