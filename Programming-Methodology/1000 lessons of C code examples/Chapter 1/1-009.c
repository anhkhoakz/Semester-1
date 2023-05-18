/*Chương 1 - Bài 9 - trang 5*/

#include <stdio.h>

int main()
{
	int s = 1, n = 9, i = 1;

	while (i <= n)
	{
		s = s * i;
		++i;
	}
	printf("s = %d", s);
}
