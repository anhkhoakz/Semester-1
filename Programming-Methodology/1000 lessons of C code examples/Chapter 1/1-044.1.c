/*Chương 1 - Bài 44-1 - trang 8*/

#include <stdio.h>

int main()
{
	int n, s = 0, t;

	do
	{
		printf("Nhap n = ");
		scanf("%d", &n);
		if (n < 0)
		{
			printf("n >= 1, nhap lai.\n");
		}
	} while (n < 0);

	t = n;
	while (t != 0)
	{
		s = s + (t % 10);
		t = t / 10;
	}
	printf("s = %d", s);
}
