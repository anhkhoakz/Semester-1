/*Chương 1 - Bài 43-1 - trang 8*/

#include <stdio.h>

int main()
{
	int n = 12345;
	int count = 0;

	if (n < 0)
	{
		printf("%d khong phai la so nguyen duong. \n", n);
		return 0;
	}

	int t = n;
	while (1)
	{
		++count;
		if (t < 10)
		{
			break;
		}
		else
		{
			t = t / 10;
		}
	}
	printf("%d co %d chu so. \n", n, count);
}
