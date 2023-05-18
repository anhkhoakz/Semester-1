/*Chương 3 - Bài 89 - trang 28*/

#include <stdio.h>

int main()
{
	int n, s;

	printf("Nhap n: ");
	fflush(stdout);
	scanf("%d", &n);

	s = 0;
	for (int i = 1; i <= n; i += 2)
	{
		s = s + i;
	}
	printf("Tong cac so le nho hon n: %d", s);
}
