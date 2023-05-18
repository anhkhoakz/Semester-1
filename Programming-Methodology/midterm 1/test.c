#include <stdio.h>

int main()
{
    int i, s;
    int n = 10;
    for (i = 0; i <= n; i++)
    {
        s += i - 1;
        printf("%d\t", s);
    }
    return 0;
}