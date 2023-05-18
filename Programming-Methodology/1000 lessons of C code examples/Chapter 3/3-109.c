/*Chương 3 - Bài 109 - trang 39*/

#include <stdio.h>

int main()
{
	for (int i = 1; i <= 9; ++i)
	{
		for (int j = 1; j <= 9; ++j)
		{
			printf("%d x %d = %d \t", j, i, j * i);
		}
		printf("\n");
	}
}
