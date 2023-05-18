/*Chương 1 - Bài 32 - trang 7*/

#include <stdio.h>
#include <math.h>

int main()
{
	int n = 9;
	float f = sqrt(n);

	printf("f = %.3f, round(f) = %.3f\n", f, round(f));
	if (f == round(f))
	{
		printf("%d la so chinh phuong.", n);
	}
	else
	{
		printf("%d khong phai la so chinh phuong.", n);
	}
}
