/*Chương 3 - Bài 86 - trang 26*/

#include <stdio.h>

int main()
{
	int n, s, i;

	printf("Nhap n: ");
	fflush(stdout);
	scanf("%d", &n);
	s = 0;
	i = 1;
	while (i <= n)
	{
		s = s + i * i * i;
		i = i + 1;
	}
	printf("s = %d \n", s);
}
