#include <stdio.h>

int main()
{

    int w;
    scanf("%d", &w);

  
    int count = 0;
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < w; j++)
        {

            if (i + j == w && i % 2 == 0 && j % 2 == 0)
            {
                count++;
            }
        }
    }

    if (count == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}