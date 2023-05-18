/*Chương 1 - Bài 24 - trang 6*/

#include <stdio.h>

int main()
{
    int n = 98;

    printf("Uoc so cua %d la: ", n);
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
        {
            printf("%4d", i);
        }
    }

    printf("\nUoc so le cua %d la: ", n);
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0 && i % 2 != 0)
        {
            printf("%4d", i);
        }
    }
}
