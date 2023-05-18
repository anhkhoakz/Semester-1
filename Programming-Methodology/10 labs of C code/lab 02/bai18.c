#include <stdio.h>

int main()
{
    printf("Ten: Nguyen Huynh Anh Khoa\nMSSV: 522H0046\n");
    long long decimal, temp, binary;
    int remainder, place = 1;

    binary = 0;

    printf("Vui long nhap vao mot so he thap phan:\n");
    scanf("%lld", &decimal);
    temp = decimal;

    while (temp > 0)
    {
        remainder = temp % 2;

        binary = (remainder * place) + binary;

        temp /= 2;

        place *= 10;
    }
    printf("So nhi phan la:\n%lld", binary);
    return 0;
}