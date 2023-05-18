/*Chương 1 - Bài 51 - trang 9*/

#include <stdio.h>

int main()
{
	int n = 5208974, t = n, max = 0;

	while (t)
	{
		if (max < t % 10)
			max = t % 10;
		t = t / 10;
	}
	printf("So lon nhat cua %d la: %d", n, max);
}
