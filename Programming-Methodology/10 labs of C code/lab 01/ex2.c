#include <stdio.h>
int main()
{
	printf("Ten: Nguyen Huynh Anh Khoa\nMSSV: 522H0046\n");
	int a, b;
	printf("Input 2 integer numbers:\n");
	scanf("%d%d", &a, &b);
	printf("Result of addition: %d\n", a + b);
	printf("Result of subtraction: %d\n", a - b);
	printf("Result of multiplication: %d\n", a * b);
	printf("Result of division: %d\n", a / b);
	printf("Result of remainder: %d", a % b);
	return 0;
}
