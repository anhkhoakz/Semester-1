/*Chương 1 - Bài 8 - trang 5*/

#include <stdio.h>

int main()
{
    float s = 0;
    int n = 9;

    for (float i = 0; i <= n; ++i)
    {
        s += (2 * i + 1) / (2 * i + 2);
    }
    printf("s = %.2f", s);
}
