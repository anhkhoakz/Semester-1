/*Chương 3 - Bài 101 - trang 38*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int _month, _year;
	char buf[100];

	printf("Input month: ");
	fgets(buf, sizeof(buf), stdin);
	for (int i = 0; i < strlen(buf) - 1; ++i)
	{
		if (!isdigit(buf[i]))
		{
			printf("Invalid data input value of month!\n");
			return 0;
		}
	}
	_month = atoi(buf);
	if (_month < 1 || _month > 12)
	{
		printf("Invalid value! Month must between 1 and 12.\n");
		return 0;
	}

	printf("Input Year: ");
	fgets(buf, sizeof(buf), stdin);
	for (int i = 0; i < strlen(buf) - 1; ++i)
	{
		if (!isdigit(buf[i]))
		{
			printf("Invalid data input value of year!\n");
			return 0;
		}
	}
	_year = atoi(buf);
	if (_year < 1)
	{
		printf("Invalid value! Year must greater than 1.\n");
		return 0;
	}

	switch (_month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("31 ngay.\n");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("30 ngay.\n");
		break;
	case 2:
		if (_year % 4 == 0)
		{
			printf("29 ngay.\n");
		}
		else
		{
			printf("28 ngay.\n");
		}
		break;
	}
}
