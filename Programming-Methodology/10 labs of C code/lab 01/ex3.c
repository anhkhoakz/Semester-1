#include <stdio.h>
int main()
{
	printf("Ten: Nguyen Huynh Anh Khoa\nMSSV: 522H0046\n");
	printf("Input a width and a length:\n");
	float w, l;
	scanf("%f%f", &w, &l);
	printf("Perimeter of the rectangle: %f\n", (w + l) * 2);
	printf("Area of the rectangle: %f", w * l);
	return 0;
}
