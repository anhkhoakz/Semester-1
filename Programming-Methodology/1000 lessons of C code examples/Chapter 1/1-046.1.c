/*Chương 1 - Bài 46 - trang 8*/

#include <stdio.h>

int main()
{
	int n, n_count = 0, odd_count = 0, t;

	do
	{
		printf("Input n = ");
		scanf("%d", &n);
		if (n < 0)
			printf("n >= 1, please input n again!");
	} while (n < 0);

	t = n;
	while (t != 0)
	{
		int odd_n;
		odd_n = t % 10;
		if (odd_n % 2 != 0)
		{
			printf("%4d", odd_n);
			++odd_count;
		}
		++n_count;
		t = t / 10;
	}
	printf("\nSo luong chu so cua n: %d\n", n_count);
	printf("So luong chu so le: %d\n", odd_count);
}
