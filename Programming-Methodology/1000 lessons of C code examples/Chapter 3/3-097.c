/*Chương 3 - Bài 97 - trang 38*/

#include <stdio.h>

int main()
{
	int a, b, c;

	printf("Nhap a: ");
	fflush(stdout);
	scanf("%d", &a);

	printf("Nhap b: ");
	fflush(stdout);
	scanf("%d", &b);

	printf("Nhap c: ");
	fflush(stdout);
	scanf("%d", &c);

	if (a == b && a == c)
	{
		printf("tam giac deu.");
	}
	else
	{
		if (a == b || b == c || a == c)
		{
			printf("tam giac can.");
		}
		else
		{
			if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
			{
				printf("tam giac vuong.");
			}
			else
			{
				printf("tam giac thuong.");
			}
		}
	}
}
