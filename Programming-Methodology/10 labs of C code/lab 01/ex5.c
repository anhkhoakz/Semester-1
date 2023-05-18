#include <stdio.h>
int main()
{
	printf("Ten: Nguyen Huynh Anh Khoa\nMSSV: 522H0046\n");
	printf("Enter the temperature from Celsius:\n");
	float a;
	scanf("%f", &a);
	printf("Temperature in Fahrenheit: %f", (a * 9 / 5) + 32);
	return 0;
}
