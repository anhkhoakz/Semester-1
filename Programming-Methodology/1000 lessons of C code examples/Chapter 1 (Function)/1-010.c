/*Chương 1 - Bài 10 - trang 5*/

#include <stdio.h>

int Func10(int x, int n);

int main()
{
	int n = 3;
	int x = 2;
	int s = 0;

	if (n < 0)
	{
		printf("n = %d, khong phai la so nguyen duong. \n", n);
		return 0;
	}
	else
	{
		s = Func10(x, n);
		printf("result = %d \n", s);
	}
}

int Func10(int x, int n)
{
	int r = 1;
	if (n == 0)
	{
		return 1;
	}
	else
	{
		for (int i = 0; i < n; ++i)
		{
			r *= x;
		}
	}
	return r;
}
