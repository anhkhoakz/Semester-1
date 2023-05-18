#include <stdio.h>
int main()
{
    printf("Ten: Nguyen Huynh Anh Khoa\nMSSV: 522H0046\n");
    printf("Please type 3 angles of a triangle:\n");
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a == 0 || b == 0 || c == 0)
    {
        printf("This triangle is invalid");
    }
    else if (a + b + c == 180)
    {
        printf("This triangle is valid");
    }
    else
    {
        printf("This triangle is invalid");
    }
    return 0;
}