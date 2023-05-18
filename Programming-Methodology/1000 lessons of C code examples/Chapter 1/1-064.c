/*Chương 1 - Bài 64 - trang 10*/

#include <stdio.h>

int main()
{
	float a = -2;
	float b = 8;
	float x = 0;

	if (a == 0)
	{
		if (b != 0)
		{
			printf("Phuong trinh vo gia tri. \n");
			return 0;
		}
		else
		{
			printf("x = bat cu gia tri nao. \n");
			return 0;
		}
	}
	else if (b == 0)
	{
		x = 0;
	}
	else
	{
		x = -(b / a);
	}
	printf("x = %f \n", x);
}
