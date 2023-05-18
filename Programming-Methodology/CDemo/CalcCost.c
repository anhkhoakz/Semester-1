#include <stdio.h>

int main(void)
{
	double d;
	double price = 0.0;

	printf("Nhap vao khoang cach (d > 0): ");
	scanf("%lf", &d);

	if (d <= 1)
	{
		price = d * 18000;
	}
	else if (d <= 10)
	{
		price = 1 * 18000 + (d - 1) * 8000;
	}
	else if (d <= 30)
	{
		price = 1 * 18000 + 9 * 8000 + (d - 10) * 6000;
	}
	else
	{
		price = 1 * 18000 + 9 * 8000 + 20 * 6000 + (d - 30) * 4000;
	}

	printf("So tien phai tra: %lf", price);
}
