/*Chương 1 - Bài 13 - trang 5*/

#include <stdio.h>

int Func13(int x, int n);

int main()
{
	int n = 3;
	int x = 2;
	int s = 0;

	s = Func13(x, n);
	printf("result = %d \n", s);
}

int Func13(int x, int n)
{
	int r = 0;
	for (int i = 0; i < n; ++i)
	{
		int t = 1;
		for (int j = 0; j < 2 * (i + 1); ++j)
		{
			t *= x;
		}
		r += t;
	}
	return r;
}
