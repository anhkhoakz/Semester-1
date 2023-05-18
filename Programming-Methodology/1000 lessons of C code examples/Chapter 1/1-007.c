/*Chương 1 - Bài 7 - trang 5*/

#include <stdio.h>

int main()
{
    float s = 0;
    int n = 9;

    for (float i = 1; i <= n; ++i)
    {
        s += i / (i + 1);
    }
    printf("s = %.2f", s);
}
