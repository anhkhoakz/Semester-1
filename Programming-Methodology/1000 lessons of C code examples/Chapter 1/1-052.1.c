/*Chương 1 - Bài 52 - trang 9*/

#include <stdio.h>

int main()
{
	int n = 21345;

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
	int r = 0;
	int min = 10; // Chỉ so sánh số từ 0 - 9 nên lớn nhất là 10
	while (1)
	{
		r = t % 10;
		if (min > r)
		{
			min = r;
		}
		if (t < 10)
			break;
		else
			t = t / 10;
	}
	printf("Chu so nho nhat cua n: %d", min);
}
