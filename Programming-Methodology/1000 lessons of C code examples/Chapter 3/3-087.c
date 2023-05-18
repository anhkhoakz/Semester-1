/*Chương 3 - Bài 87 - trang 26*/

#include <stdio.h>

int main()
{
	int n, s;

	s = 0;
	n = 0;
	while (s < 10000)
	{
		++n;
		s = s + n;
	}
	printf("n = %d", n);
}
