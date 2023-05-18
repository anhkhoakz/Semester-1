/*Chương 3 - Bài 92 - trang 34*/

#include <stdio.h>

int main()
{
	int a, b;

	printf("Nhap a: ");
	fflush(stdout);
	scanf("%d", &a);

	printf("Nhap b: ");
	fflush(stdout);
	scanf("%d", &b);

	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	printf("UCLN cua hai so a, b la: %d", a);
}
