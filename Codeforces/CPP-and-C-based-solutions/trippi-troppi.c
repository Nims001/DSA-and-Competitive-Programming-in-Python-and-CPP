#include <stdio.h>
int main(){
int t;
scanf("%d",&t);



while (t--) {
    char a[11], b[11],c[11];
    char cont[4];
    
             
    scanf("%s %s %s",a,b,c);

    
        cont[0] = a[0];
         cont[1] = b[0];
         cont[2] = c[0];
        cont[3] = '\0';
         printf("%s\n",cont);


        
}







return 0;
}
