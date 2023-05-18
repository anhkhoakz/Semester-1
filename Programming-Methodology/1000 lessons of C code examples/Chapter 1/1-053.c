/*Chương 1 - Bài 53 - trang 9*/

#include <stdio.h>

int main()
{
	int n = 2953495, t = n, max = 0, max_count = 0, i;

	while (t)
	{
		i = t % 10;
		if (i == max)
			++max_count;
		if (i > max)
		{
			max = i;
			max_count = 1;
		}
		t = t / 10;
	}

	printf("Chu so lon nhat cua %d: %d \n", n, max);
	printf("Chu so lon nhat, so %d lap lai %d lan. \n", max, max_count);
}
