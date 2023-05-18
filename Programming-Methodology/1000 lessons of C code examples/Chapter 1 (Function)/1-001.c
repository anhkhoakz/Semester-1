/*Chương 1 - Bài 1 - trang 4*/

#include <stdio.h>

int Func1(int n);

int main()
{
	int n = 9;
	int s = 0;

	s = Func1(n);
	printf("result = %d \n", s);
}

int Func1(int n)
{
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += (i + 1);
	}
	return sum;
}
