/*Chương 1 - Bài 76 - trang 11*/

#include <stdio.h>

int main()
{
	unsigned int n = 27;
	int t = 1;

	printf("n = %d \n", n);

	do
	{
		t = t * 3;
	} while (t < n);

	if (t == n)
	{
		printf("n co danh 3^k \n");
	}
	else
	{
		printf("n khong co danh 3^k \n");
	}
}
