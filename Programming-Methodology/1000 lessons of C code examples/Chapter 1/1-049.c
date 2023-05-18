/*Chương 1 - Bài 49 - trang 8*/

#include <stdio.h>

int main()
{
	int n = 9436, t = n, first_n = 0;

	do
	{
		first_n = t % 10;
		t = t / 10;
	} while (t != 0);
	printf("So dau tien cua n: %d\n", first_n);
}
