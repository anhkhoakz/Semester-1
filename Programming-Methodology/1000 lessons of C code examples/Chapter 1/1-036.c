/*Chương 1 - Bài 36 - trang 7*/

#include <stdio.h>
#include <math.h>

int main()
{
    float s = 0, m = 1;
    int n = 2;

    for (int i = 1; i <= n; ++i)
    {
        m = m * i;
        s = sqrt(m + s);
    }
    printf("s = %.3f", s);
}
