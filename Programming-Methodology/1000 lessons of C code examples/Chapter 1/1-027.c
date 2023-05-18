/*Chương 1 - Bài 27 - trang 6*/

#include <stdio.h>

int main()
{
    int n = 90, count = 0;

    for (int i = 2; i <= n; i += 2)
    {
        if (n % i == 0)
        {
            ++count;
        }
    }
    printf("So luong uoc so chan cua %d la: %d", n, count);
}
