/*Chương 1 - Bài 58 - trang 9*/

#include <stdio.h>

int main()
{
	int n = 24682;
	int bool = 1;

	if (n < 0)
	{
		printf("%d khong phai la so nguyen duong. \n");
		return 0;
	}
	else
	{
		printf("n = %d \n", n);
	}

	int t = n;
	while (1)
	{
		if ((t % 10) % 2 != 0)
		{
			bool = 0;
			break;
		}
		if (t < 10)
			break;
		else
			t = t / 10;
	}
	if (bool != 0)
	{
		printf("n toan so chan. \n");
	}
	else
	{
		printf("n khong toan so chan. \n");
	}
}
