
class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        brackets ={ 
            '(' : ')',
            '[' : ']',
            '{' : '}'
        }
        for b in s:
            if b in brackets.keys():
                #if it's a opening bracket, add it to stack
                stack.append(b)
            else:
                #if we have a closing bracket
              if len(stack) == 0: #this condition solves the case where we get closing bracket while stack is empty
                return False
              else:
                #pop from top of the stack, it that is the matching bracket for the current closing bracket
                #do nothing, if the brackets do not match then the parentheses are not valid
                p = stack.pop()
                if brackets[p] != b:
                    return False 



        #finally if we only check if stack is empty and do True for empty stack
        #then the case where we are only given opening brackets as input will fail
        #hence we need to first check for non empty stack and then only 
        #return True if the stack is NOT non empty (i.e. empty)
        if len(stack) != 0:
            return False
        else:
            return True
