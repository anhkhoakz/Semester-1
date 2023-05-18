/*Chương 1 - Bài 49 - trang 8*/

#include <stdio.h>

int main()
{
	int n = 9346;
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
	while (1)
	{
		++count;
		if (t >= 10)
		{
			t = t / 10;
		}
		else
		{
			s = t;
			break;
		}
	}
	printf("%d co %d chu so. \n", n, count);
	printf("Chu so dau tien cua n la: %d \n", s);
}
