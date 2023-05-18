/*Chương 1 - Bài 62 - trang 10*/

#include <stdio.h>

int main()
{
	int a = 100, b = 88, _greater_n, _smaller_n;

	if (a > b)
	{
		_greater_n = a;
		_smaller_n = b;
	}
	else
	{
		_greater_n = b;
		_smaller_n = a;
	}

	if (_greater_n % _smaller_n == 0)
	{
		printf("UCLN cua %d va %d la: %d", a, b, _smaller_n);
	}
	else
	{
		for (int i = _smaller_n / 2; i > 0; --i)
		{
			if (_greater_n % i == 0 && _smaller_n % i == 0)
			{
				printf("UCLN cua %d va %d la: %d", a, b, i);
				break;
			}
		}
	}
}
