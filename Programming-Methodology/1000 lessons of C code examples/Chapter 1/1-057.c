/*Chương 1 - Bài 57 - trang 9*/

#include <stdio.h>

int main()
{
	int n = 2480, t = n;

	while (t)
	{
		if ((t % 10) % 2 != 0)
		{
			printf("So %d co so le.", n);
			return 0;
		}
		t = t / 10;
	}
	printf("So %d toan so chan.", n);
}
