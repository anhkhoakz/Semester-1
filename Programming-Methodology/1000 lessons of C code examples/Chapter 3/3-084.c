/*Chương 3 - Bài 84 - trang 21*/

#include <stdio.h>

int main()
{
	float a, b, x;
	printf("Nhap a: ");
	fflush(stdout);
	scanf("%f", &a);
	printf("Nhap b: ");
	fflush(stdout);
	scanf("%f", &b);

	if (a == 0)
	{
		if (b == 0)
		{
			printf("PT co vo so nghiem. \n");
		}
		else
		{
			printf("PT vo nghiem. \n");
		}
	}
	else
	{
		x = -b / a;
		printf("PT co nghiem x = %f \n", x);
	}
}
