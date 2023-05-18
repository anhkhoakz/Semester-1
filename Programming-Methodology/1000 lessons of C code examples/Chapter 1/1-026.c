/*Chương 1 - Bài 26 - trang 6*/

#include <stdio.h>

int main()
{
    int n = 95, s = 1;

    for (int i = 1; i <= n; i += 2)
    {
        if (n % i == 0)
        {
            s = s * i;
        }
    }
    printf("s = %d", s);
}
