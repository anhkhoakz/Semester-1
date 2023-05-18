#include <stdio.h>
#include <math.h>

int main()
{
    float x0, y0, r, xA, yA, d;

    printf("Vui long nhap vao toa do tam O (x0, y0):\n");
    scanf("%f%f", &x0, &y0);
    printf("Vui long nhap vao toa do diem A (xA, yA):\n");
    scanf("%f%f", &xA, &yA);
    printf("Vui long nhap vao ban kinh duong tron:\n");
    scanf("%f", &r);

    d = sqrt(pow((xA - x0), 2) + pow((yA - y0), 2));

    if (d == r)
    {
        printf("Diem A (%f, %f) nam tren duong tron\n", xA, yA);
    }
    else if (d < r)
    {
        printf("Diem A (%f, %f) nam trong duong tron\n", xA, yA);
    }
    else if (d > r)
    {
        printf("Diem A (%f, %f) nam ngoai duong tron\n", xA, yA);
    }
    return 0;
}
