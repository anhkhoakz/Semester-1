/*Chương 1 - Bài 48 - trang 8*/

#include <stdio.h>

int main()
{
	int n = 123456789, s = 1, t = n, odd_n;

	while (t != 0)
	{
		if (t % 2 != 0)
		{
			odd_n = t % 10;
			s = s * odd_n;
		}
		t = t / 10;
	}
	printf("s = %d", s);
}
