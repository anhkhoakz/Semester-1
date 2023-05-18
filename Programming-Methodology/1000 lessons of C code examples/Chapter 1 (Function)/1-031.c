/*Chương 1 - Bài 31 - trang 7*/

#include <stdio.h>

int Func31(int n);

int main()
{
	int n = 19;

	if (Func31(n))
	{
		printf("%d la so nguyen to. \n", n);
	}
	else
	{
		printf("%d khong phai la so nguyen to. \n", n);
	}
}

int Func31(int n)
{
	int bool = 1;
	for (int i = 2; i <= n / 2; ++i)
	{
		if (n % i == 0)
		{
			bool = 0;
			break;
		}
	}
	return bool;
}
