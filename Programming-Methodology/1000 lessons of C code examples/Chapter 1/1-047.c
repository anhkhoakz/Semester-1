/*Chương 1 - Bài 47 - trang 8*/

#include <stdio.h>

int main()
{
	int n = 123456789, s = 0, t = n, even_n;

	while (t != 0)
	{
		even_n = t % 10;
		if (even_n % 2 == 0)
			s += even_n;
		t = t / 10;
	}
	printf("s = %d", s);
}
