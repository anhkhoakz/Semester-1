/*Chương 1 - Bài 41 - trang 7*/

#include <stdio.h>
#include <math.h>

int main()
{
    float s = 1;
    int n = 3;

    for (int i = 1; i <= n; ++i)
    {
        s = 1.0 + 1.0 / s;
    }
    printf("s = %.3f", s);
}
