#include <stdio.h>
int main()
{
	printf("Ten: Nguyen Huynh Anh Khoa\nMSSV: 522H0046\n");
	printf("Enter number of date:\n");
	int d;
	scanf("%d", &d);
	int years, weeks, days;
	years = d / 365;
	weeks = (d % 365) / 7;
	days = d - (years * 365 + weeks * 7);
	printf("Years: %d\n", years);
	printf("Weeks: %d\n", weeks);
	printf("Days: %d\n", days);
	return 0;
}
