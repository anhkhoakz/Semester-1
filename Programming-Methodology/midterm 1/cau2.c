#include <stdio.h>

int main()
{
    double n, m;
    int a = 18000, b = 8000, c = 6000, d = 4000;
    printf("Nguyen Huynh Anh Khoa\nMSSV: 522H0046\n");
    printf("Vui long nhap vao so quang duong:\n");
    scanf("%lf", &n);
    if (n <= 1)
    {
        m = n * a;
    }
    else if (n <= 10)
    {
        m = a + b * (n - 1);
    }
    else if (n <= 30)
    {
        m = a + b * 9 + c * (n - 10);
    }
    else if (n > 30)
    {
        m = a + b * 9 + c * 20 + d * (n - 30);
    }
    printf("So tien phai tra cho %f km la: %f", n, m);
    return 0;
}

//
/*
0.8 = 14.400
5 = 50.000
20 = 150.000
35km la 410.000
*/