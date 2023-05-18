/*Chương 1 - Bài 44 - trang 8*/

#include <stdio.h>

int main()
{
	int n = 12345, s = 0, t = n;

	while (t != 0)
	{
		s += t % 10;
		t = t / 10;
	}
	printf("s = %d", s);
}
