/*Chương 3 - Bài 83 - trang 21*/

#include <stdio.h>

int main()
{
	signed int a, b;

	printf("Nhap a: ");
	fflush(stdout);
	scanf("%d", &a);
	printf("Nhap b: ");
	fflush(stdout);
	scanf("%d", &b);
	if (a * b > 0)
	{
		printf("Hai so a, b cung dau. \n");
	}
	else
	{
		printf("Hai so a, b khac dau. \n");
	}
}
