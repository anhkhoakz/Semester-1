/*Chương 3 - Bài 93 - trang 34*/

#include <stdio.h>

int main()
{
	int n, d;

	printf("Nhap n: ");
	fflush(stdout);
	scanf("%d", &n);

	if (n < 2)
	{
		printf("n khong phai so nguyen to. \n");
	}
	else
	{
		if (n == 2)
		{
			printf("n la so nguyen to. \n");
		}
		else
		{
			if (n % 2 == 0)
			{
				printf("n khong phai la so nguyen to. \n");
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
				if (n == d)
					printf("n la so nguyen to. \n");
				else
				{
					printf("n khong phai so nguyen to. \n");
					printf("n chia het cho %d \n", d);
				}
			}
		}
	}
}
