#include <stdio.h>
int main()
{
    int i, a[100], n = 100;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
            printf("Mang toan chan\n");
    }
    printf("Mang ton tai so le\n");
    return 0;
}