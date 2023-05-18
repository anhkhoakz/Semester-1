/*Chương 1 - Bài 17 - trang 5*/

#include <stdio.h>

int Func_1(int x, int n);
int Func_2(int n);

int main()
{
	int n = 3;
	int x = 2;
	float s = 0;

	for (int i = 0; i < n; ++i)
	{
		float a = (float)Func_1(x, i + 1);
		float b = (float)Func_2(n);
		s = s + a / b;
	}

	printf("Result = %f \n", s);
}

int Func_1(int x, int n)
{ // x^n
	int s = 1;
	if (n == 0)
	{
		return 1;
	}
	else
	{
		for (int i = 0; i < n; ++i)
		{
			s = s * x;
		}
		return s;
	}
}

int Func_2(int n)
{ // n!
	int s = 1;
	if (n == 0)
	{
		return 1;
	}
	else
	{
		for (int i = 0; i < n; ++i)
		{
			s = s * (i + 1);
		}
		return s;
	}
}
