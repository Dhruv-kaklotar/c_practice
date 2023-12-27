#include <stdio.h>
int main()
{
    int i, c, b, d, j, k, flag, a, n;
    printf("enter the number\n");
    scanf("%d",&n);

    for (i = n, b = 0, d = 0; i; i = i / 10)
    {
        a = i % 10;
        for (k = d, flag = 0; k; k = k / 10)
        {
            if (a == k % 10)
                flag = 1;
        }
        if (flag)
            continue;
        for (j = i / 10, c = 0; j; j = j / 10)
        {

            k = j % 10;
            if (a == k)
            {
                d = d * 10 + k;
                c++;
            }
        }
        if (c == 0)
            b = b * 10 + a;
    }

    for (i = b, a = 0; i; i = i / 10)
    {
        a = a * 10 + i % 10;
    }
    printf("%d\n", a);
}