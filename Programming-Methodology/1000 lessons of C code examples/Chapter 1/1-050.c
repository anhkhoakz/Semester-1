/*Chương 1 - Bài 50 - trang 9*/

#include <stdio.h>

int main()
{
	int n = 900001, revesed_n = 0, t = n;

	while (t)
	{
		revesed_n = (t % 10) + revesed_n * 10;
		t = t / 10;
	}
	printf("So dao nguoc cua n: %d", revesed_n);
}
