/*Chương 3 - Bài 89 - trang 28*/

#include <stdio.h>

int main()
{
	int n, s, i;

	printf("Nhap n: ");
	fflush(stdout);
	scanf("%d", &n);

	s = 0;
	i = 1;
	for (;;)
	{
		s = s + i;
		i = i + 2;
		if (i > n)
			break;
	}
	printf("Tong cac so le nho hon n: %d", s);
}
