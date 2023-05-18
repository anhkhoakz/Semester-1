/*Chương 1 - Bài 59 - trang 9*/

#include <stdio.h>

int Func59(int n);

int main()
{
	int n = 1221;

	printf("n = %d \n", n);
	if (Func59(n))
	{
		printf("n la so doi xung. \n");
	}
	else
	{
		printf("n khong phai la so doi xung. \n");
	}
}

int Func59(int n)
{
	int bool = 1;
	int t = n;
	int r = 0;

	while (t > 0)
	{
		r = (r * 10) + (t % 10);
		t = t / 10;
	}

	if (r != n)
	{
		bool = 0;
	}

	return bool;
}
