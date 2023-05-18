/*Chương 1 - Bài 21 - trang 6*/

#include <stdio.h>

int main()
{
	int n = 10;
	int s = 0;

	printf("Uoc so cua %d la: ", n);
	for (int i = 1; i <= n; ++i)
	{
		if ((n % i) == 0)
		{
			printf("%d ", i);
			s = s + i;
		}
	}
	printf("\n");
	printf("Tong uoc so cua %d la: %d", n, s);
}
