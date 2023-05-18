/*Chương 1 - Bài 19 - trang 6*/

#include <stdio.h>

float Func19(int x, int n);
float Xsquare(int x, int n);
float GiaiThua(int n);

int main()
{
	int n = 3;
	int x = 2;
	float s = 0;

	s = Func19(x, n);
	printf("result = %f \n", s);
}

float Func19(int x, int n)
{
	float s = 0;
	for (float i = 0; i < n; ++i)
	{
		s += Xsquare(x, i + 1) / GiaiThua(i + 1);
	}
	return s;
}

float Xsquare(int x, int n)
{
	float s = 1;
	for (int i = 0; i < 2 * n + 1; ++i)
	{
		s *= x;
	}
	return s;
}

float GiaiThua(int n)
{
	float s = 1;
	for (float i = 0; i < 2 * n + 1; ++i)
	{
		s *= i + 1;
	}
	return s;
}
