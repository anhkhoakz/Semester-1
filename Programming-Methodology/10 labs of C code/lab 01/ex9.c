#include <stdio.h>
int main()
{
	printf("Ten: Nguyen Huynh Anh Khoa\nMSSV: 522H0046\n");
	printf("Nhap vao 3 so:\n");
	int a, b, c, max = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a > b && a > c)
	{
		max = a;
	}
	else if (b > a && b > c)
	{
		max = b;
	}
	else
	{
		max = c;
	}
	printf("%d la gia tri lon nhat", max);
	return 0;
}
