/*Chương 1 - Bài 55 - trang 9*/

#include <stdio.h>

int main()
{
	int n = 2123425, t = n, first_n = 0, first_n_count = 0;

	while (t)
	{
		first_n = t % 10;
		t = t / 10;
	}
	t = n;
	while (t)
	{
		if (first_n == t % 10)
			++first_n_count;
		t = t / 10;
	}

	printf("Chu so dau tien cua %d la: %d \n", n, first_n);
	printf("Chu so dau tien cua n, so %d lap lai %d lan. \n", first_n, first_n_count);
}
