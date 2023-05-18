#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("Ten: Nguyen Huynh Anh Khoa\nMSSV: 522H0046\n");
	printf("Enter a number:\n");
	float a;
	scanf("%f", &a);
	float absvalue = abs(a);
	printf("Absolute value of number: %f", absvalue);
	return 0;
}
