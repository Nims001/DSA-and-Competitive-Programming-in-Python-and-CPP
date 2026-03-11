// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);

//     for (int i = 0; i < t; i++)
// //     {
// //         int n, k;
// //         scanf("%d %d", &n, &k);
// //         char s[n + 1];
// //         fgets(s, n + 1, stdin);
// //         s[strcspn(s, "\n")] = '\0';

// //         printf("%s", s);
// //     }

// //     return 0;
// // }


// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int t;
//     scanf("%d", &t);

//     for (int i = 0; i < t; i++)
//     {
//         int n, k;
//         scanf("%d %d", &n, &k);
//         getchar();  // <-- This consumes the leftover newline

//         char s[n + 1];
//         fgets(s, n + 1, stdin);
//         s[strcspn(s, "\n")] = '\0'; // Remove newline

//         printf("%s\n", s);
//     }

//     return 0;
// }


// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int t;
//     scanf("%d", &t);

//     for (int i = 0; i < t; i++)
//     {
//         int n, k;
//         scanf("%d %d", &n, &k);

//         char s[n + 1]; // +1 for null terminator
//         scanf(" %n[^\n]", s); // Limits input to n characters

//         printf("%s\n", s);
//     }

//     return 0;
// }


#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        getchar();  // Consume leftover newline from previous input

        char s[n + 1];  // +1 for null terminator
        scanf("%s",&s);
        printf("%s",s);
    }

    return 0;
}
