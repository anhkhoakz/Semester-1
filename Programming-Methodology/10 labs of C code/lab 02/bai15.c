#include <stdio.h>
int main()
{
    printf("Ten: Nguyen Huynh Anh Khoa\nMSSV: 522H0046\n");
    int n, i, j;
    printf("Vui long nhap vao gioi han:\n");
    scanf("%d", &n);
    printf("Cac so nguyen to tu 1 den %d:\n", n);
    for (i = 0; i <= n; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            printf("%d ", j);
        }
    }
    return 0;
}