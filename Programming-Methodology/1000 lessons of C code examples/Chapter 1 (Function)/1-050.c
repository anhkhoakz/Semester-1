/*Chương 1 - Bài 50 - trang 9*/

#include <stdio.h>

int Func50(int n);

int main()
{
	int n = 12345;

	printf("n = %d \n", n);
	printf("So dao nguoc cua n la: %d", Func50(n));
}

int Func50(int n)
{
	int t = n;
	int r = 0;
	while (t > 0)
	{
		r = (r * 10) + (t % 10);
		t = t / 10;
	}
	return r;
}
