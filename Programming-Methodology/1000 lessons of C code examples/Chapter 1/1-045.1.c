/*Chương 1 - Bài 45 - trang 8*/

#include <stdio.h>

int main()
{
	int n, s = 1, t;

	do
	{
		printf("Nhap n = ");
		scanf("%d", &n);
		if (n < 0)
			printf("n >= 0 !, nhap lai!\n");
	} while (n < 0);

	t = n;
	while (t != 0)
	{
		s = s * (t % 10);
		t = t / 10;
	}
	printf("s = %d", s);
}
