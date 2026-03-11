#include <iostream>
int main(){
    int n,k;
    std::cin>>n>>k;
   //NOTE: Most people's solutions are not using while loop to ensure that
   //value of n remains positive, so Ig the question meant that the input
   //is given in such a way that the final output is always going to be positive.
    
      while(k--){
            if(n%10 == 0){
                n = n/10;
            }
            else{
                n--;
            }
        }
   //NOTE: When I removed the while loop previously use to ensure n>0, the time taken by the program remained the same in codeforces, so ig it didn't matter somehow in the end   
    std::cout<<n;

    return 0;
}
