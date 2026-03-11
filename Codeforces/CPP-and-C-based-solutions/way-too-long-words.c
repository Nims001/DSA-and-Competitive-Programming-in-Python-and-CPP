
//Original Solution By me
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     if (n > 100 || n < 1)
//     {
//         return 1;
//     }
//     int s[n];
//     char a[n][100];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%99s", a[i]);
//     }
//     // This is to read number of characters in each string entered in variable: a and store it in variable:s
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 100; j++)
//         {
//             if (a[i][j] == '\0')
//             {
//                 s[i] = j;

//                 break;
//             }
//         }
//     }
//     // This is to print the final result for very long words
//     for (int i = 0; i < n; i++)
//     {

//         if (s[i] > 10)
//         {
//             printf("%c%d%c\n", a[i][0], s[i] - 2, a[i][s[i] - 1]);
//         }
//         else
//         {
//             printf("%s\n", a[i]);
//         }
//     }

//     return 0;
// }




#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n > 100 || n < 1)
    {
        return 1;
    }

    int s[n];
    char a[n][101];
    for (int i = 0; i < n; i++)
    {
        scanf("%100s", a[i]);
        s[i] = strlen(a[i]);
    }
    
 
    // This is to print the final result for very long words
    for (int i = 0; i < n; i++)
    {

        if (s[i] > 10)
        {
            printf("%c%d%c\n", a[i][0], s[i] - 2, a[i][s[i] - 1]);
        }
        else
        {
            printf("%s\n", a[i]);
        }
    }

    return 0;
}