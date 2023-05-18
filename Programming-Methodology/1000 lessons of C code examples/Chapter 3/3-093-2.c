/*Chương 3 - Bài 93 - trang 34*/

#include <stdio.h>

int main()
{
	int n, d, bool = 0;

	printf("Nhap n: ");
	fflush(stdout);
	scanf("%d", &n);

	if (n < 2)
	{
		bool = 0;
	}
	else if (n == 2)
	{
		bool = 0;
	}
	else if (n % 2 == 0)
	{
		bool = 0;
	}
	else
	{
		d = 3;
		while (d <= n)
		{
			if (n % d == 0)
				break;
			d += 2;
		}
		if (d == n)
			bool = 1;
		else
			bool = 0;
	}
	if (bool)
		printf("n la so nguyen to. \n");
	else
		printf("n khong phai so nguyen to. \n");
}
