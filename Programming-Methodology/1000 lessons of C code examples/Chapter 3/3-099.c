/*Chương 3 - Bài 99 - trang 38*/

#include <stdio.h>

int main()
{
	float a = 9, b = 8, c = 9, tmp;

	if (a > b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a > c)
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b > c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	printf("%5.3f %5.3f %5.3f", a, b, c);
}
