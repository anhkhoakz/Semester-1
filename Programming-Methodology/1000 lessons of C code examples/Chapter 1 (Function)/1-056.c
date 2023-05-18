/*Chương 1 - Bài 56 - trang 9*/

#include <stdio.h>

int Func56(int n);

int main()
{
	int n = 135798;

	printf("n = %d \n", n);
	if (Func56(n))
	{
		printf("n toan so le. \n");
	}
	else
	{
		printf("n khong toan so le. \n");
	}
}

int Func56(int n)
{
	int bool = 1;
	int t = n;
	int r = -1;

	while (t > 0)
	{
		r = t % 10;
		if (r % 2 == 0)
		{
			bool = 0;
			break;
		}
		t = t / 10;
	}
	return bool;
}
