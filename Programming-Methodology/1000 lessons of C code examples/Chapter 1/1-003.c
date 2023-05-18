/*Chương 1 - Bài 3 - trang 4*/

#include <stdio.h>

int main()
{
    float s = 0;
    int n = 3;

    for (int i = 1; i <= n; ++i)
    {
        s += 1.0 / i;
    }
    printf("Sum = %.3f\n", s);
}
