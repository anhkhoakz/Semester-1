/*Chương 1 - Bài 59 - trang 9*/

#include <stdio.h>

int main()
{
	int n = 12521, t = n, revesed_n = 0;

	while (t)
	{
		revesed_n = revesed_n * 10 + (t % 10);
		t = t / 10;
	}

	if (n == revesed_n)
	{
		printf("%d la so doi xung.", n);
	}
	else
	{
		printf("%d khong la so doi xung.", n);
	}
}
