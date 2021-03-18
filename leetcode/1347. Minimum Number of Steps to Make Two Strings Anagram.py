class Solution:
    def minSteps(self, s: str, t: str) -> int:
        cnt = 0
        a = collections.Counter(s)        
        b = collections.Counter(t) 
        
        for ch in a:
            diff = 0 if (a[ch] - b[ch]) < 0 else a[ch] - b[ch]  
            cnt = cnt + diff
         
        return cnt
        
