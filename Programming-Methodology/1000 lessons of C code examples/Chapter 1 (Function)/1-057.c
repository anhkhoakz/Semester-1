/*Chương 1 - Bài 57 - trang 9*/

#include <stdio.h>

int Func57(int n);

int main()
{
	int n = 2468;

	printf("n = %d \n", n);
	if (Func57(n))
	{
		printf("n toan chu so chan. \n");
	}
	else
	{
		printf("n khong toan chu so chan \n");
	}
}

int Func57(int n)
{
	int bool = 1;
	int t = n;

	while (t > 0)
	{
		int r = t % 10;
		if (r % 2 != 0)
		{
			bool = 0;
		}
		t = t / 10;
	}
	return bool;
}
