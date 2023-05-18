#include <stdio.h>

int main()
{
    char a;
    printf("Ten: Nguyen Huynh Anh Khoa\nMSSV: 522H0046\n");
    printf("Please type an character:\n");
    scanf("%c", &a);
    if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z') || (a >= '0' && a <= '9'))
    {
        printf("%c is a alphanumeric", a);
    }
    else
    {
        printf("%c is not a alphanumeric", a);
    }

    return 0;
}
