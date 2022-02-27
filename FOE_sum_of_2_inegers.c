#include <stdio.h>
void main()
{
    int n1, n2, sum1 = 0, sum2 = 0, i, j, a, b;

    printf("Enter n1:");
    scanf("%d", &n1);
    printf("Enter n2:");
    scanf("%d", &n2);
    a = n1;
    b = n2;

    while (n1 > 0)
    {
        i = n1 % 10;
        sum1 += i;
        n1 = n1 / 10;
    }
    while (n2 > 0)
    {
        j = n2 % 10;
        sum2 += j;
        n2 = n2 / 10;
    }

    if (sum1 != sum2)
    {
        if (sum1 > sum2)
        {
            printf("%d is larger", a);
        }
        else
        {
            printf("%d is larger", b);
        }
    }
    else
    {
        printf("-1");
    }
}