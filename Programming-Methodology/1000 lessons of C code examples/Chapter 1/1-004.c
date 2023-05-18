/*Chương 1 - Bài 4 - trang 4*/

#include <stdio.h>

int main()
{
    float s = 0;
    int n = 9;

    for (int i = 1; i <= n; ++i)
    {
        s += 1.0 / (i * 2);
    }
    printf("S = %.2f", s);
}
