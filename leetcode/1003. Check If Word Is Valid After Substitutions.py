class Solution:
    def isValid(self, s: str) -> bool:
        
        # loop thorough the string if empty puush to stack 
        # if same push to stack
        # if next then pop stack top and push to stack
        # if string empty valid else not valid
            
            stack = deque() 
            for ch in s:
                if not stack and ch != 'a':
                    return False 
                
                if stack and stack[-1] == ch:
                    stack.append(ch)
                
                elif stack and stack[-1] == 'a' and ch == 'b':
                    stack.append(ch)
                    
                elif stack and stack[-1] == 'b' and ch == 'c':
                    if stack : stack.pop()
                    if stack :  stack.pop()
                 
                else :stack.append(ch)
               
                    
                    
            if stack: return False
            else: return True
                    
                    
                    
                    
                 

