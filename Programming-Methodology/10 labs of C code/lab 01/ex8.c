#include <stdio.h>
int main()
{
	printf("Ten: Nguyen Huynh Anh Khoa\nMSSV: 522H0046\n");
	printf("Nhap vao 2 so:\n");
	int a, b, max = 0;
	scanf("%d%d", &a, &b);
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	printf("%d la gia tri lon nhat", max);
	return 0;
}
