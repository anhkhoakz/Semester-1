/*Chương 1 - Bài 40 - trang 7*/

#include <stdio.h>
#include <math.h>

int main()
{
    float s = 0, m = 1;
    int x = 2, n = 3;

    for (int i = 1; i <= n; ++i)
    {
        m = m * x;
        s = sqrt(m + s);
    }
    printf("s = %.3f", s);
}
