#include <stdio.h>
#include <math.h>
int sumEvenNumber(int);

int main()
{
    printf("Ten: Nguyen Huynh Anh Khoa\nMSSV: 522H0046\n");
    int n;
    printf("Vui long nhap vao gioi han: ");
    scanf("%d", &n);
    printf("Tong cac so chan tu 1 toi %d: %d", n, sumEvenNumber(n));
    return 0;
}

int sumEvenNumber(int n)
{
    int i, sum = 0;
    for (i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    return sum;
}