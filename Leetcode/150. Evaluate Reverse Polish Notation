class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for t in tokens:

            if t not in ['+', '-', '*', '/']:
                stack.append(int(t))
        
            else:
              
                if len(stack) > 1:
                    a = stack.pop()
                    b = stack.pop()
                    if t == '+':
                        stack.append(int(a + b))
                    elif t == '-':
                        stack.append(int(b - a))
                    elif t == '*':
                        stack.append(int(a * b))
                    elif t == '/':
                        stack.append(int(b/a))
        return int(stack[0])
