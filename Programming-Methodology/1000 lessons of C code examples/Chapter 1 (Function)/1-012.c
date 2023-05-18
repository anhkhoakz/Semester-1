/*Chương 1 - Bài 12 - trang 5*/

#include <stdio.h>

int Func12(int x, int n);

int main()
{
	int n = 4;
	int x = 2;
	int s = 0;

	s = Func12(x, n);
	printf("result = %d \n", s);
}

int Func12(int x, int n)
{
	int r = 0;
	for (int i = 0; i < n; ++i)
	{
		int t = 1;
		for (int j = 0; j < i + 1; ++j)
		{
			t *= x;
		}
		r += t;
	}
	return r;
}
