/*Chương 1 - Bài 6 - trang 5*/

#include <stdio.h>

int main()
{
    float s = 0;
    int n = 9;

    for (int i = 1; i <= n; ++i)
    {
        s += 1.0 / (i * (i + 1));
    }
    printf("s = %.2f", s);
}
