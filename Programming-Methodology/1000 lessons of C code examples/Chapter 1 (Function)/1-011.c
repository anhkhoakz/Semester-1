/*Chương 1 - Bài 11 - trang 5*/

#include <stdio.h>

int Func11(int n);

int main()
{
	int n = 3;
	int s = 0;

	s = Func11(n);
	printf("result = %d \n", s);
}

int Func11(int n)
{
	int r = 0;
	for (int i = 0; i < n; ++i)
	{
		int t = 1;
		for (int j = 0; j < i + 1; ++j)
		{
			t *= (j + 1);
		}
		r += t;
	}
	return r;
}
