#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    if(n<0){
        printf("false");
        return 1;
    }
    for(int i = 1;i<n;i++){
        if (i*i*i == n){
          printf("true");
          break;
        }
        if(i*i*i > n){
            printf("false");
            break;
        }
    }
    return 0;
}