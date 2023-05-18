#include <stdio.h>
int main()
{
	printf("Ten: Nguyen Huynh Anh Khoa\nMSSV: 522H0046\n");
	printf("Enter year:\n");
	int year;
	scanf("%d", &year);
	if (year % 4 == 0)
	{
		printf("%d la nam nhuan.", year);
	}
	else
	{
		printf("%d khong la nam nhuan", year);
	}
	return 0;
}
