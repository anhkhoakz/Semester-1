/*Chương 1 - Bài 22 - trang 6*/

#include <stdio.h>

int main()
{
    int n = 27, s = 1;

    printf("Uoc so cua %d la: ", n);
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
        {
            printf("%4d", i);
            s = s * i;
        }
    }
    printf("\ns = %d", s);
}
