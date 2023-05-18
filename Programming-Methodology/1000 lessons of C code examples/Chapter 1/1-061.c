/*Chương 1 - Bài 61 - trang 10*/

#include <stdio.h>

int main()
{
	int n = 43021, t = n, _left, _right, _bool = 1;

	_right = t % 10;
	t = t / 10;
	while (t)
	{
		_left = t % 10;
		if (_left < _right)
		{
			_bool = 0;
			break;
		}
		else
		{
			_right = _left;
		}
		t = t / 10;
	}
	if (_bool)
	{
		printf("So %d giam dan tu trai sang phai.", n);
	}
	else
	{
		printf("So %d KHONG giam dan tu trai sang phai.", n);
	}
}
