/*Chương 2 - Bài 77 - trang 14*/

#include <stdio.h>

int main()
{
	int i, n, s;
	scanf("%d", &n);
	s = 0;
	i = 1;
	while (i <= n)
	{
		s = s + i;
		i = i + 1;
	}
	printf("s = %d \n", s);
}
