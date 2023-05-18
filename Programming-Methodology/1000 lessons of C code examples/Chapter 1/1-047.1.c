/*Chương 1 - Bài 47 - trang 8*/

#include <stdio.h>

int main()
{
	int n = 1246801;
	int count = 0;
	int s = 0;

	if (n < 0)
	{
		printf("%d khong phai la so nguyen duong. \n", n);
		return 0;
	}
	else
	{
		printf("n = %d \n", n);
	}

	int t = n;
	while (1)
	{
		if ((t % 10) % 2 == 0)
		{
			s = s + (t % 10);
		}
		++count;
		if (t >= 10)
		{
			t = t / 10;
		}
		else
		{
			break;
		}
	}
	printf("%d co %d chu so. \n", n, count);
	printf("s = %d \n", s);
}
