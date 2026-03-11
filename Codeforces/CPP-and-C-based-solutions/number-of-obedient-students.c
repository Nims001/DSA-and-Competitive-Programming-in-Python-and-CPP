#include <stdio.h>
int main(){

int n;
scanf("%d",&n);

int a[n];

for(int i = 0;i<n;i++){
    scanf("%d",&a[i]);
}

int count = 0;
for(int i = 0;i<n;i++){
   for(int j = 0;j<n;j++){
      if ((i<j && a[i] > a[j]) || (i>j && a[i]<a[j])){
            count++;
            break;
        }
}}
printf("\n%d",n-count);
return 0;
}
