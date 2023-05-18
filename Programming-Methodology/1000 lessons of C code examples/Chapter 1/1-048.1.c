/*Chương 1 - Bài 48 - trang 8*/

#include <stdio.h>

int main()
{
	int n = 1122334455;
	int s = 0;
	int count = 0;

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
	s = 1;
	while (1)
	{
		if ((t % 10) % 2)
		{
			s = s * (t % 10);
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
	if (n > 0)
	{
		printf("Tich cac chu so le cua n la: %d \n", s);
	}
	else
	{
		printf("Tich cac chu so le cua n la: %d \n", 0);
	}
}
