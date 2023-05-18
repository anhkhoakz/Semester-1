/*Chương 3 - Bài 94 - trang 37*/

#include <stdio.h>

int main()
{
	int i = 1;

	for (int i = 1; i < 100; i += 2)
	{
		if (i == 5 || i == 7 || i == 93)
			continue;
		printf("%d ", i);
	}

	printf("\n");

	while (i < 100)
	{
		if (i != 5 && i != 7 && i != 93)
		{
			printf("%d ", i);
		}
		i += 2;
	}
}
