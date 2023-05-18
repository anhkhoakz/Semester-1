/*Chương 1 - Bài 60 - trang 9*/

#include <stdio.h>

int main()
{
	int n, t, _last, _secondLast, _bool = 1;

	do
	{
		printf("Nhap n: ");
		scanf("%d", &n);
		if (n == 0)
		{
			printf("n = 0, Exit.");
			return 0;
		}
		else if (n < 10)
		{
			printf("n >= 10, please input again or input '0' to exit.\n");
		}
	} while (n < 10);

	t = n;
	_last = t % 10;
	t = t / 10;
	while (t)
	{
		_secondLast = t % 10;
		if (_secondLast < _last)
		{
			_last = _secondLast;
			t = t / 10;
		}
		else
		{
			_bool = 0;
			break;
		}
	}

	if (_bool)
	{
		printf("So %d la so tang dan tu trai qua phai.", n);
	}
	else
	{
		printf("So %d KHONG tang dan tu trai qua phai.", n);
	}
}
