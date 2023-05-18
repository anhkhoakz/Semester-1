/*Chương 2 - Bài 79 - trang 14*/

#include <stdio.h>

int main()
{
	int dem, n, t;
	scanf("%d", &n);
	dem = 0;
	t = n;
	while (t != 0)
	{
		dem = dem + 1;
		t = t / 10;
	}
	printf("%d", dem);
}
