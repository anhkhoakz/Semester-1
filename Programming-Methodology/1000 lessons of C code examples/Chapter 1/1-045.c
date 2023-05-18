/*Chương 1 - Bài 45 - trang 8*/

#include <stdio.h>

int main()
{
	int n = 12345, s = 1, t = n;

	while (t != 0)
	{
		s = s * (t % 10);
		t = t / 10;
	}
	printf("s = %d", s);
}
