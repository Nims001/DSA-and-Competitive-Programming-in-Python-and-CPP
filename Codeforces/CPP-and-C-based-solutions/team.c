#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n][3];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
    }

    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        int count1 = 0;

        for (int j = 0; j < 3; j++)
        {

            if (a[i][j] == 1)
            {
                count1++;
            }
        }

        if (count1 == 2 || count1 == 3)
        {
            count2++;
        }
    }

    printf("%d", count2);
    return 0;
}