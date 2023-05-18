/*Chương 1 - Bài 51 - trang 9*/

#include <stdio.h>

int Func51(int n);

int main()
{
	int n = 68735;

	printf("n = %d \n", n);
	printf("Chu so lon nhat cua n la: %d", Func51(n));
}

int Func51(int n)
{
	int max = -1;
	int t = n;
	int r = 0;

	while (t > 0)
	{
		r = t % 10;
		if (max < r)
		{
			max = r;
		}
		t = t / 10;
	}
	return max;
}
