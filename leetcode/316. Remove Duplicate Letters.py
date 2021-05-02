class Solution:
    def removeDuplicateLetters(self, s: str) -> str:
        
        stack = deque()
        c = Counter(s)
        
        for ch in s:
            c[ch]+= -1
            if ch in stack:
                continue
           
            while stack and stack[-1] > ch and c[stack[-1]] > 0:
                stack.pop()
            stack.append(ch)
              
                
        return ''.join(stack)
            
        
