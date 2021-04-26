class Solution:
    def check(self , ch: str):
            if ch ==  ')': return '('
            if ch == '}': return '{'
            if ch == ']': return '['

    def isValid(self, s: str) -> bool:
        open = ['(', '{', '[']
        stack = deque()
        for ch in s:
            if ch in open:
                stack.append(ch)
            else:
                if stack:
                    if stack.pop() != self.check(ch):
                        return False
                else :return False

        return not stack
