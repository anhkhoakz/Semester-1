#include <stdio.h>
int main()
{
    printf("Ten: Nguyen Huynh Anh Khoa\nMSSV: 522H0046\n");
    int n, factorial = 1, i;

    printf("Vui long nhap vao mot so nguyen duong:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("Giai thua cua %d: %d", n, factorial);
    return 0;
}