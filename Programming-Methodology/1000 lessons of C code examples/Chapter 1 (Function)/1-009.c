/*Chương 1 - Bài 9 - trang 5*/

#include <stdio.h>

int Func9(int n);

int main()
{
	int n = 5;
	int s = 0;

	s = Func9(n);
	printf("result = %d \n", s);
}

int Func9(int n)
{
	int r = 1;
	for (int i = 0; i < n; ++i)
	{
		r *= (i + 1);
	}
	return r;
}
