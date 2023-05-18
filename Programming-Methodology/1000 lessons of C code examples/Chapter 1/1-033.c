/*Chương 1 - Bài 33 - trang 7*/

#include <stdio.h>
#include <math.h>

int main()
{
    float s = 0;
    int n = 2;

    s = sqrt(2.0);
    for (int i = 2; i <= n; ++i)
    {
        s = sqrt(2 + s);
    }
    printf("s = %.3f", s);
}
