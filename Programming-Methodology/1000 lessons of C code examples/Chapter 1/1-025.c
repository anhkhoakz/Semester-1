/*Chương 1 - Bài 25 - trang 6*/

#include <stdio.h>

int main()
{
    int n = 98, s = 0;

    for (int i = 2; i <= n; i += 2)
    {
        if (n % i == 0)
        {
            s += i;
        }
    }
    printf("s = %d", s);
}
