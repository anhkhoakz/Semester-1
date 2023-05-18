/*Chương 1 - Bài 51 - trang 9*/

#include <stdio.h>

int main()
{
	int n = 298765;

	if (n < 0)
	{
		printf("%d khong phai la so nguyen duong. \n");
		return 0;
	}
	else
	{
		printf("n = %d \n", n);
	}

	int t = n;
	int r = 0;
	int max = -1;
	while (1)
	{
		r = t % 10;
		if (max < r)
		{
			max = r;
		}
		if (t < 10)
			break;
		else
			t = t / 10;
	}
	printf("Chu so lon nhat cua n: %d", max);
}
