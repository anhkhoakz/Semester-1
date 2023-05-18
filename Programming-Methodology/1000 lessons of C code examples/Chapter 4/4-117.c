/*Chương 4 - Bài 117 - trang 48*/

#include <stdio.h>

float Tong(float, int);
float LuyThua(float, int);

int main()
{
	int n = 0;
	float x = 0;
	float kq = 0;

	printf("Nhap n: ");
	fflush(stdout);
	scanf("%d", &n);
	printf("Nhap x: ");
	fflush(stdout);
	scanf("%f", &x);

	kq = Tong(x, n);

	printf("kq = %f", kq);
}

float Tong(float x, int n)
{
	float s = 0;
	for (int i = 0; i < n; ++i)
	{
		s = s + LuyThua(x, n);
	}
	return s;
}

float LuyThua(float x, int n)
{
	float t = 1;
	for (int i = 0; i < n; ++i)
	{
		t = t * x;
	}
	return t;
}
