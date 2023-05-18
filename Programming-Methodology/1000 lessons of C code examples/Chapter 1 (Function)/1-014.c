/*Chương 1 - Bài 14 - trang 5*/

#include <stdio.h>

int Func14(int x, int n);

int main()
{
	int n = 5;
	int x = 2;
	int s = 0;

	s = Func14(x, n);
	printf("result = %d \n", s);
}

int Func14(int x, int n)
{
	int r = x;
	for (int i = 0; i < n - 1; ++i)
	{
		int t = 1;
		for (int j = 0; j < 2 * (i + 1) + 1; ++j)
		{
			t *= x;
		}
		r += t;
	}
	return r;
}
