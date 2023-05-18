#include <stdio.h>
#include <math.h>

int main()
{
    float x, fx;
    printf("Vui long nhap vao x: ");
    scanf("%f", &x);
    if (x < 0)
    {
        fx = sin(x) * cos(5 * x);
    }
    else if (x == 0)
    {
        fx = pow(5, x);
    }
    else if (x > 0 && x < 5)
    {
        fx = exp(x);
    }
    else
    {
        fx = (pow(5, x) / (x + 5));
    }
    printf("Gia tri cua f(x) = %lf\n", fx);
    return 0;
}