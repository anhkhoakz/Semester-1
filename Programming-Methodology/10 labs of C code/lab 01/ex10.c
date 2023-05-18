#include <stdio.h>
int main()
{
	printf("Ten: Nguyen Huynh Anh Khoa\nMSSV: 522H0046\n");
	printf("Nhap vao 1 so:\n");
	int a;
	scanf("%d", &a);
	if (a % 2 == 0)
	{
		printf("%d la so chan", a);
	}
	else
	{
		printf("%d la so le", a);
	}
	return 0;
}
