#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, p, s;

    do
    {
        printf("Nhap vao 3 canh tam giac:\n");
        scanf("%f%f%f", &a, &b, &c);
        if ((a + b < c) || (a + c < b) || (b + c < a))
        {
            printf("Vui long nhap vao 3 canh tam giac hop le\n");
        }
    } while ((a + b < c) || (a + c < b) || (b + c < a));

    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Chu vi hinh tam giac: %lf\n", p);
    printf("Dien tich hinh tam giac: %lf\n", s);

    if (a == b && b == c)
    {
        printf("Tam giac deu\n");
    }
    else if ((a == b || a == c || b == c))
    {
        printf("Tam giac can\n");
    }
    else
    {
        printf("Tam giac thuong\n");
    }

    return 0;
}