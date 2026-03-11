// 01.03.2025
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int op[t];
    int a[t][20];
    int n[t];
    int x[t];
    
    for (int i = 0; i < t; i++)
    {
        
        

        scanf("%d %d", &n[i],&x);
           for (int j = 0; j < n[i]; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
        
            
            
               
            
        

    
   
    for(int i = 0;i<t;i++){
        int c0 = 0, c1 = 0, c3 = 0, c2 = 0, c5 = 0;
    for (int j = 0; j < n[i]; j++)
        {
            
            if (a[i][j] == 0)
                c0++;
            if (a[i][j] == 1)
                c1++;
            if (a[i][j] == 2)
                c2++;
            if (a[i][j] == 3)
                c3++;
            if (a[i][j] == 5)
                c5++;

            if (c0 >= 3 && c1 >= 1 && c2 >= 2 && c3 >= 1 && c5 >= 1)
            {
                op[i] = j+1;
                break;
            }
            
            
            op[i] = 0;
            
            
        }
    }
    

    for(int i = 0;i<t;i++){
        printf("%d\n",op[i]);
    }

    return 0;
}