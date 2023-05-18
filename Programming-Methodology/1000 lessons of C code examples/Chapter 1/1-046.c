/*Chương 1 - Bài 46 - trang 8*/

#include <stdio.h>

int main()
{
	int n = 123456789, odd_count = 0, t = n;

	while (t != 0)
	{
		if ((t % 10) % 2 != 0)
			++odd_count;
		t = t / 10;
	}
	printf("Odd count = %d", odd_count);
}
