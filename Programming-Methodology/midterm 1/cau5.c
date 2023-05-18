#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    float fx;
    printf("Vui long nhap vao gia tri x, y: ");
    scanf("%f%f", &x, &y);
    fx = (3 * pow(x, 2) * y - (1 / 2) * pow(x, 2) + (1 / 5) * x * y) * 6 * x * pow(y, 3);
    printf("Ket qua cua bieu thuc: %lf", fx);
    return 0;
}