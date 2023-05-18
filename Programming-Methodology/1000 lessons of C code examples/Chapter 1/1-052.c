/*Chương 1 - Bài 52 - trang 9*/

#include <stdio.h>

int main()
{
	int n = 589126, t = n, min = n % 10;

	while (t)
	{
		if (min > t % 10)
			min = t % 10;
		t = t / 10;
	}
	printf("So nho nhat cua %d la: %d", n, min);
}
