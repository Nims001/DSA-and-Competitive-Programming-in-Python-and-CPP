// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     scanf("%s", str);  // Simple input (no spaces)

//     int len = strlen(str);
//     for (int i = 0; i < len / 2; i++) {
//         char temp = str[i];
//         str[i] = str[len - i - 1];
//         str[len - i - 1] = temp;
//     }

//     printf("Reversed string: %s\n", str);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int rows = 5; // Number of rows in the pattern
    
//     for(int i = 1; i <= rows; i++) {
//         // Print leading spaces
//         for(int space = 1; space <= rows - i; space++) {
//             printf(" ");
//         }
//         // Print stars with spaces
//         for(int j = 1; j <= i; j++) {
//             printf(" *");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

#include <stdio.h>

void reversePrint() {
    char c;
    if ((c = getchar()) != '\n') {
        reversePrint();
        putchar(c);
    }
}

int main() {
    printf("Enter a line of text: ");
    reversePrint();  // Directly call without clearing buffer
    printf("\n");
    return 0;
}