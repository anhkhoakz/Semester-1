/*Chương 1 - Bài 31 - trang 7*/

#include <stdio.h>
#include <math.h>

int main()
{
	int n = 11177, _bool = 1;

	if (n < 2)
	{
		_bool = 0;
	}
	else if (n == 2)
	{
		_bool = 1;
	}
	else if (n % 2 == 0)
	{
		_bool = 0;
	}
	else
	{
		_bool = 1;
		for (int i = 3; i <= sqrt(n); i += 2)
		{
			if (n % i == 0)
			{
				_bool = 0;
				break;
			}
		}
	}
	if (_bool)
	{
		printf("%d la so nguyen to.", n);
	}
	else
	{
		printf("%d khong phai la so nguyen to.", n);
	}
}
