#include <stdio.h>
#include <string.h>
int main(){
   char a[101];
   int b[100];
   scanf("%s",a);
   int repeat = 0;
   for(int i = 0;i<strlen(a);i++){
    for(int j = strlen(a)-1;j>i;j--){
         if(a[j] == a[i]){
            repeat++;
            b[j] = 1;
         }
      }

   }

   return 0;
}
