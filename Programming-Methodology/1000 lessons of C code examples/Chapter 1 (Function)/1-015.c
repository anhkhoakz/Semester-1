/*Chương 1 - Bài 15 - trang 5*/

#include <stdio.h>

float Func15(int n);
float Sum(int n);

int main()
{
	int n = 3;
	float s = 0;

	s = Func15(n);
	printf("result = %f \n", s);
}

float Func15(int n)
{
	float s = 0;
	for (float i = 0; i < n; ++i)
	{
		s += 1.0 / Sum(i + 1);
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
