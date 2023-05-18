/*Chương 3 - Bài 104 - trang 39*/

#include <stdio.h>

int isDecimal(float);
void InputValue(int *, int *, int *);
int CheckValidInput(int, int, int);
int CountDate(int, int, int);

int main()
{
	int _date, _month, _year;

	InputValue(&_date, &_month, &_year);
	printf("date = %d\nmonth = %d\nyear = %d\n", _date, _month, _year);

	if (!CheckValidInput(_date, _month, _year))
	{
		printf("Input is invalid.\n");
	}
	else
	{
		printf("Ngay thu: %d\n", CountDate(_date, _month, _year));
	}
}

int isDecimal(float f)
{
	int i = (int)f;
	return (i == f);
}

void InputValue(int *d, int *m, int *y)
{
	float _fd, _fm, _fy;
	int _scanf_return_value, c;
	char *str_error01 = "Input error. Please try again!\n";
	char *str_error02 = "Input is invalid. Date, month, year must be decimal.\n";
	char *str_dt_error01 = "Input is invalid. Date must greater than 1 and smaller than or equal 31.\n";
	char *str_mth_error01 = "Input is invalid. Month must greater than 1 and smaller than or equal 12.\n";
	char *str_yr_error01 = "Input is invalid. Year must greater than 1.\n";

	do
	{
		printf("Date: ");
		_scanf_return_value = scanf("%f", &_fd);
		while ((c = getchar()) != '\n' && c != EOF)
			;
		if (_scanf_return_value < 1)
		{
			printf("%s", str_error01);
		}
		else
		{
			if (!isDecimal(_fd))
			{
				printf("%s", str_error02);
			}
			else
			{
				if (_fd < 1 || _fd > 31)
				{
					printf("%s", str_dt_error01);
				}
				else
				{
					*d = (int)_fd;
					break;
				}
			}
		}
	} while (1);

	do
	{
		printf("Month: ");
		_scanf_return_value = scanf("%f", &_fm);
		while ((c = getchar()) != '\n' && c != EOF)
			;
		if (_scanf_return_value < 1)
		{
			printf("%s", str_error01);
		}
		else
		{
			if (!isDecimal(_fm))
			{
				printf("%s", str_error02);
			}
			else
			{
				if (_fm < 1 || _fm > 12)
				{
					printf("%s", str_mth_error01);
				}
				else
				{
					*m = (int)_fm;
					break;
				}
			}
		}
	} while (1);

	do
	{
		printf("Year: ");
		_scanf_return_value = scanf("%f", &_fy);
		while ((c = getchar()) != '\n' && c != EOF)
			;
		if (_scanf_return_value < 1)
		{
			printf("%s", str_error01);
		}
		else
		{
			if (!isDecimal(_fy))
			{
				printf("%s", str_error02);
			}
			else
			{
				if (_fy < 1)
				{
					printf("%s", str_yr_error01);
				}
				else
				{
					*y = (int)_fy;
					break;
				}
			}
		}
	} while (1);
}

int CheckValidInput(int d, int m, int y)
{
	switch (m)
	{
	case 4:
	case 6:
	case 9:
	case 11:
		if (d > 30)
		{
			printf("Thang 4, 6, 8, 11 co toi da 30 ngay.\n");
			return 0;
		}
		break;
	case 2:
		if (y % 4 == 0)
		{
			if (d > 29)
			{
				printf("Nam nhuan, thang 2 co toi da 29 ngay.\n");
				return 0;
			}
		}
		else
		{
			if (d > 28)
			{
				printf("Nam khong nhuan, thang 2 co toi da 28 ngay.\n");
				return 0;
			}
		}
		break;
	}
	return 1;
}

int CountDate(int d, int m, int y)
{
	int s = d;
	for (int i = 1; i < m; ++i)
	{
		switch (i)
		{
		case 4:
		case 6:
		case 9:
		case 11:
			s = s + 30;
			break;
		case 2:
			if (y % 4 == 0)
			{
				s = s + 29;
			}
			else
			{
				s = s + 28;
			}
			break;
		default:
			s = s + 31;
			break;
		}
	}
	return s;
}