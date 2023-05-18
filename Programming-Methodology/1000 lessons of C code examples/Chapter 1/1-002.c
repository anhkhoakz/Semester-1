/*Chương 1 - Bài 2 - trang 4*/

#include <stdio.h>
#include <math.h>

int main()
{
    int s = 0, n = 9;

    for (int i = 1; i <= n; ++i)
    {
        s += i * i;
    }
    printf("Sum = %d\n", s);
}
