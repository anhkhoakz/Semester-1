/*Chương 3 - Bài 103 - trang 39*/

#include <stdio.h>
#include <stdlib.h>

int IsInteger(float);
void InputValue(int *, int *, int *);
int CheckValidInput(int, int, int);
void PreviousDate(int, int, int);

int main()
{
	int _date, _month, _year;

	InputValue(&_date, &_month, &_year);
	printf("Value input:\ndate = %d\nmonth = %d\nyear = %d\n", _date, _month, _year);
	if (CheckValidInput(_date, _month, _year))
	{
		PreviousDate(_date, _month, _year);
	}
}

int IsInteger(float f)
{
	int i;
	i = (int)f;
	return (i == f);
}

void InputValue(int *d, int *m, int *y)
{
	int i, c;
	float _fd, _fm, _fy;
	char *str_error01 = "Input erorr. Please try again!\n";
	char *str_error02 = "Input erorr. Date, month, year must be integer!\n";
	char *str_dt_error = "Input erorr. Date must greater than 0 and smaller than or equal 31.\n";
	char *str_mth_error = "Input erorr. Month must greater than 0 and smaller than or equal 12.\n";
	char *str_yr_error = "Input erorr. Year must greater than 0\n";
	do
	{
		printf("Date: ");
		i = scanf("%f", &_fd);
		while ((c = getchar()) != '\n' && c != EOF)
			;
		if (i < 1)
		{
			printf("%s", str_error01);
		}
		else
		{
			if (!IsInteger(_fd))
			{
				printf("%s", str_error02);
				continue;
			}
			if (_fd < 1 || _fd > 31)
			{
				printf("%s", str_dt_error);
			}
			else
			{
				break;
			}
		}
	} while (1);
	*d = (int)_fd;

	do
	{
		printf("Month: ");
		i = scanf("%f", &_fm);
		while ((c = getchar()) != '\n' && c != EOF)
			;
		if (i < 1)
		{
			printf("Input erorr. Please try again!\n");
		}
		else
		{
			if (!IsInteger(_fm))
			{
				printf("%s", str_error02);
				continue;
			}
			if (_fm < 1 || _fm > 12)
			{
				printf("%s", str_mth_error);
			}
			else
			{
				break;
			}
		}
	} while (1);
	*m = (int)_fm;

	do
	{
		printf("Year: ");
		i = scanf("%f", &_fy);
		while ((c = getchar()) != '\n' && c != EOF)
			;
		if (i < 1)
		{
			printf("Input erorr. Please try again!\n");
		}
		else
		{
			if (!IsInteger(_fy))
			{
				printf("%s", str_error02);
				continue;
			}
			if (_fy < 1)
			{
				printf("%s", str_yr_error);
			}
			else
			{
				break;
			}
		}
	} while (1);
	*y = (int)_fy;
}

int CheckValidInput(int d, int m, int y)
{
	int _bool = 1;
	char *str_error01 = "Month 4, 6, 9, 11, date must smaller or equal 30.\n";
	char *str_error02 = "Nam khong nhuan, thang 2 chi co toi da 28 ngay.\n";
	char *str_error03 = "Nam nhuan, thang 2 chi co toi da 29 ngay.\n";

	switch (m)
	{
	case 4:
	case 6:
	case 9:
	case 11:
		if (d > 30)
		{
			printf("%s", str_error01);
			_bool = 0;
		}
		break;
	case 2:
		if (y % 4 == 0)
		{
			if (d > 29)
			{
				printf("%s", str_error03);
				_bool = 0;
			}
		}
		else
		{
			if (d > 28)
			{
				printf("%s", str_error02);
				_bool = 0;
			}
		}
		break;
	}
	return _bool;
}

void PreviousDate(int d, int m, int y)
{
	d = d - 1;
	if (d < 1)
	{
		switch (m)
		{
		case 1:
		case 2:
		case 4:
		case 8:
		case 9:
		case 11:
			d = 31;
			break;
		case 3:
			if (y % 4 == 0)
			{
				d = 29;
			}
			else
			{
				d = 28;
			}
			break;
		default:
			d = 30;
			break;
		}
		m = m - 1;
	}

	if (m < 1)
	{
		m = 12;
		y = y - 1;
	}

	printf("\nThe next date:\ndate = %d\nmonth = %d\nyear = %d\n", d, m, y);
}
