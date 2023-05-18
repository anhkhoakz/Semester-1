/*Chương 1 - Bài 43 - trang 8*/

#include <stdio.h>

int main()
{
    int n = 12345, count = 0, t = n;

    while (t > 0)
    {
        t = t / 10;
        ++count;
    }
    printf("count = %d", count);
}
