class Solution:
    def countCollisions(self, directions: str) -> int:
        stack = []
        count = 0

        for d in directions:

            if d == 'R':
                stack.append('R')

            elif d == 'S':
              
                while stack and stack[-1] == 'R':
                    stack.pop()
                    count += 1
                stack.append('S')

            elif d == 'L':
                collisions_here = 0

              
                while stack and stack[-1] == 'R':
                    stack.pop()
                    collisions_here += 1

                if collisions_here > 0:
                
                    count += collisions_here + 1
                    stack.append('S')

                elif stack and stack[-1] == 'S':
           
                    count += 1
                    stack.append('S')

        return count
