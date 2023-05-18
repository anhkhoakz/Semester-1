/*Chương 1 - Bài 42 - extra - trang 8*/

#include <stdio.h>

int main()
{
    int n = 999, s = 0, k = 0;

    while (s < n)
    {
        ++k;
        s = s + k;
        printf("Loop %d\nk = %d\ns = s + %d = %d\n--------\n", k, k, k, s);
    }
    --k;
    printf("k = %d", k);
}
