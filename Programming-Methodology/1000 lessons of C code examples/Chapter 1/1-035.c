/*Chương 1 - Bài 35 - trang 7*/

#include <stdio.h>
#include <math.h>

int main()
{
    float s = 0;
    int n = 2;

    s = sqrt(n);
    for (int i = 2; i <= n; ++i)
    {
        s = sqrt(n - i + 1 + s);
    }
    printf("s = %.3f", s);
}
