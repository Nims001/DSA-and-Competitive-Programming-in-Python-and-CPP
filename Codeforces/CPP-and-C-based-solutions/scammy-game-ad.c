#include <stdio.h>

int main()
{

    int t;
    scanf("%d", &t);

    int max[t];
    // int x = 1, y = 1;

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int total[n];
        int x = 1, y = 1;
        char o[n][3];
        int a[n][2];
        for (int j = 0; j < n; j++)
        {

            scanf("%c %d %c %d", &o[j][0], &a[j][0], &o[j][1], &a[j][1]);
        }

        for (int k = 0; k < n; k++)
        {
            total[k] = gate1(o[k][0], a[k][0], &x) + gate2(o[k][1], a[k][1], &y);
            
        }
    }

    return 0;
}

int gate1(char o, int a, int *x)
{
    int inc;
    if (o == 'x')
    {
        inc = *x * (a - 1);
    }
    if (o == '+')
    {
        inc = a;
    }

    return inc;
}


int gate2(char o, int a, int *y)
{
    int inc;
    if (o == 'x')
    {
        inc = *y * (a - 1);
    }
    if (o == '+')
    {
        inc = a;
    }
    return inc;
}
