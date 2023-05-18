/*Chương 3 - Bài 95 - trang 37*/

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

	if (a < 0)
		a = a * (-1);
	if (b < 0)
		b = b * (-1);
	if (c < 0)
		c = c * (-1);
	printf("a: %d \nb: %d \nc: %d \n", a, b, c);
}
