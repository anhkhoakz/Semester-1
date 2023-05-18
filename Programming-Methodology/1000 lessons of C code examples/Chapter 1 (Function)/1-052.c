/*Chương 1 - Bài 52 - trang 9*/

#include <stdio.h>

int Func52(int n);

int main()
{
	int n = 628735;

	printf("n = %d \n", n);
	printf("Chu so nho nhat cua n la: %d", Func52(n));
}

int Func52(int n)
{
	int min = 10; // đang so sánh số có 1 chữ số
	int t = n;
	int r = 0;

	while (t > 0)
	{
		r = t % 10;
		if (min > r)
		{
			min = r;
		}
		t = t / 10;
	}
	return min;
}
