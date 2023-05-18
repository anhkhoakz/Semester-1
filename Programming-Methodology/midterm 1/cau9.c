#include <stdio.h>

int reverseNumber(int);

int main()
{
    int n, falseInputCount = 1;
    do
    {
        printf("Vui long nhap vao 1 so nguyen duong: ");
        scanf("%d", &n);
        if (n < 0 && falseInputCount <= 5)
        {
            printf("Gia tri nhap vao khong hop le!\n");
            falseInputCount++;
        }
    } while (n < 0 && falseInputCount <= 5);
    printf("%d", reverseNumber(n));

    return 0;
}

int reverseNumber(int n)
{
    int temp, remainder;
    while (n % 10 != 0)
    {
        remainder = n % 10;
        n /= 10;
        temp = remainder * 10 + (n % 10);
    }
    return temp;
}