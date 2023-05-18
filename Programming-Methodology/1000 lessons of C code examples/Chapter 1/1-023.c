/*Chương 1 - Bài 23 - trang 6*/

#include <stdio.h>

int main()
{
    int n = 99, count = 0;

    printf("Uoc so cua %d la: ", n);
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
        {
            printf("%4d", i);
            ++count;
        }
    }
    printf("\ncount = %d", count);
}
