/*Chương 1 - Bài 19 - trang 6*/

#include <stdio.h>
#include <math.h>
int main()
{
    float s = 1, a = 0, b = 1;
    int x = 2, n = 3;

    for (int i = 1; i <= n; ++i)
    {
        a = pow(x, 2 * i + 1);
        b = 1;
        for (int j = 1; j <= 2 * i + 1; ++j)
        {
            b = b * j;
        }
        s += a / b;
    }
    printf("s = %.2f", s);
}
