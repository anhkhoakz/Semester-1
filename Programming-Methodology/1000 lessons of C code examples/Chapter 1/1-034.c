/*Chương 1 - Bài 34 - trang 7*/

#include <stdio.h>
#include <math.h>

int main()
{
    float s = 0;
    int n = 9;

    s = sqrt(1.0);
    for (int i = 2; i <= n; ++i)
    {
        s = sqrt(i + s);
    }
    printf("s = %.3f", s);
}
