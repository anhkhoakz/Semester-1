/*Chương 1 - Bài 32 - trang 7*/

#include <stdio.h>

int Func32(int n);

int main()
{
	int n = 64;

	if (Func32(n))
	{
		printf("%d la so chinh phuong. \n", n);
	}
	else
	{
		printf("%d khong phai la so chinh phuong. \n", n);
	}
}

int Func32(int n)
{
	int bool = 0;
	for (int i = 2; i <= n / 2; ++i)
	{
		if (i * i == n)
		{
			bool = 1;
			break;
		}
	}
	return bool;
}
