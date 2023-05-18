/*Chương 1 - Bài 56 - trang 9*/

#include <stdio.h>

int main()
{
	int n = 1593, t = n;

	while (t)
	{
		if ((t % 10) % 2 == 0)
		{
			printf("So %d co so chan.", n);
			return 0;
		}
		t = t / 10;
	}
	printf("So %d toan so le.", n);
}
