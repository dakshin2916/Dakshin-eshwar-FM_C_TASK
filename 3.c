#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    printf("total units: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        if (i < 100)
            sum += 5;
        else if (i >= 100 && i < 300)
            sum += 8;
        else if (i >= 300)
            sum += 10;
    }
    printf("total bill: %d", sum);
}