/*Chương 1 - Bài 50 - trang 9*/

#include <stdio.h>

int main()
{
	int n = 123450089, t = n;

	printf("So nghich dao cua %d la: ", n);
	do
	{
		printf("%d", t % 10);
	} while (t = t / 10);
}
