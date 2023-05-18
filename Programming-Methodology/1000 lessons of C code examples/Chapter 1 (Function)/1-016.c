/*Chương 1 - Bài 16 - trang 5*/

#include <stdio.h>

float Func16(int x, int n);
float Sum(int n);
float Xsquare(int x, int n);

int main()
{
	int n = 3;
	int x = 2;
	float s = 0;

	s = Func16(x, n);
	printf("result = %f \n", s);
}

float Func16(int x, int n)
{
	float s = 0;
	for (float i = 0; i < n; ++i)
	{
		s += Xsquare(x, i + 1) / Sum(i + 1);
	}
	return s;
}

float Sum(int n)
{
	float s = 0;
	for (int i = 0; i < n; ++i)
	{
		s += i + 1;
	}
	return s;
}

float Xsquare(int x, int n)
{
	float s = 1;
	for (int i = 0; i < n; ++i)
	{
		s *= x;
	}
	return s;
}
