#include <stdio.h>
#include <math.h>

int main()
{
    printf("Ten: Nguyen Huynh Anh Khoa\nMSSV: 522H0046\n");
    int num, lastDigit, digits, sum, i, end;
    printf("Nhap vao gioi han:\n");
    scanf("%d", &end);
    printf("So tu man tu 1 den %d la:\n", end);
    for (i = 1; i <= end; i++)
    {
        sum = 0;
        num = i;
        digits = (int)log10(num) + 1;
        while (num > 0)
        {
            lastDigit = num % 10;
            sum += ceil(pow(lastDigit, digits));
            num /= 10;
        }
        if (i == sum)
        {
            printf("%d ", i);
        }
    }
    return 0;
}