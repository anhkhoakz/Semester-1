/*Chương 4 - Bài 116 - trang 42*/

#include <stdio.h>

long Tong(int n);

int main()
{
	int n = 0;
	long kq = 0;

	printf("Nhap n: ");
	fflush(stdout);
	scanf("%d", &n);

	kq = Tong(n);

	printf("kq = %ld", kq);
}

long Tong(int n)
{
	long s = 0;
	for (int i = 0; i < n; ++i)
	{
		s = s + (i + 1);
	}
	return s;
}
