/*Chương 3 - Bài 90 - trang 31*/

#include <stdio.h>

int main()
{
	int n, m, s;

	printf("Nhap n: ");
	fflush(stdout);
	scanf("%d", &n);

	s = 0;
	m = 0;
	while (s + m + 1 < n)
	{
		++m;
		s = s + m;
	}
	printf("m = %d \n", m);
}
