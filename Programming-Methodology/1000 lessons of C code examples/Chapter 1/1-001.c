#include <stdio.h>

int main()
{
    int s = 0, n = 9;
    for (int i = 1; i <= n; ++i)
    {
        s += i;
    }
    printf("Sum = %d\n", s);
}
