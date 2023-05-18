/*Chương 1 - Bài 2 - trang 4*/

#include <stdio.h>

int Func2(int n);

int main()
{
	int n = 3;
	int s = 0;

	s = Func2(n);
	printf("result = %d \n", s);
}

int Func2(int n)
{
	int r = 0;
	for (int i = 0; i < n; ++i)
	{
		r += (i + 1) * (i + 1);
	}
	return r;
}
