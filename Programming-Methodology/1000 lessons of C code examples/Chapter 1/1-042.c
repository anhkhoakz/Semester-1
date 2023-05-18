/*Chương 1 - Bài 42 - trang 8*/

#include <stdio.h>

int main()
{
    int n = 16, s = 0, k = 0;

    while (s < n)
    {
        ++k;
        s = s + k;
    }
    --k;
    printf("s(k) = %d\nk = %d", s, k);
}
