/*Chương 1 - Bài 75 - trang 11*/

#include <stdio.h>

int main()
{
	int n = 8;
	int t = 1;

	printf("n = %d \n", n);

	do
	{
		t = t * 2;
	} while (t < n);

	if (t == n)
	{
		printf("n co danh 2^k \n");
	}
	else
	{
		printf("n khong co danh 2^k \n");
	}
}
