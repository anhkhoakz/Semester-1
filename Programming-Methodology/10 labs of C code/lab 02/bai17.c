#include <stdio.h>
int main()
{
    printf("Ten: Nguyen Huynh Anh Khoa\nMSSV: 522H0046\n");
    int i, j, end, sum;
    printf("Nhap so ket thuc:\n");
    scanf("%d", &end);

    printf("So hoan thien tu 1 den %d:\n", end);

    for (i = 1; i <= end; i++)
    {
        sum = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}