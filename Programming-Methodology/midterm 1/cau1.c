#include <stdio.h>

int main()
{
    printf("Ho va ten: Nguyen Huynh Anh Khoa\n MSSV: 522H0046\n");
    int m, h, s;
    printf("Vui long nhap vao so tien tieu chuan va so gio lam viec: ");
    // scanf("%d %d", &m, &h);
    m = 80;
    h = 47;
    if (h <= 40)
    {
        s = m * h;
    }
    else if (h <= 45)
    {
        s = (m * 40) + ((m * 1.8) * (h - 40));
    }
    else if (h <= 50)
    {
        s = (m * 40) + ((m * 1.8) * (h - 40)) + ((m * 2.5) * (h - 45));
    }
    else if (h > 50)
    {
        s = s = (m * 40) + ((m * 2.5) * (h - 40));
    }
    printf("Tong so tien ma nhan vien thu nhap duoc trong 1 tuan: %d", s);
    return 0;
}