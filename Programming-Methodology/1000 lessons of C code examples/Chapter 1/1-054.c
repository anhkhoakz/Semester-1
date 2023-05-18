/*Chương 1 - Bài 54 - trang 9*/

#include <stdio.h>

int main()
{
	int n = 2113415, t = n, min = n % 10, min_count = 0, i;

	while (t)
	{
		i = t % 10;
		if (i == min)
			++min_count;
		if (i < min)
		{
			min = i;
			min_count = 1;
		}
		t = t / 10;
	}
	printf("Chu so nho nhat cua %d: %d \n", n, min);
	printf("Chu so nho nhat, so %d lap lai %d lan. \n", min, min_count);
}
