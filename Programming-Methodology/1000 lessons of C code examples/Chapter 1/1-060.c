/*Chương 1 - Bài 60 - trang 9*/

#include <stdio.h>

int main()
{
	int n = 1234567890, t = n, _left, _right;

	_left = _right = 0;
	while (t)
	{
		if (t >= 10)
		{
			_right = t % 10;
			_left = (t / 10) % 10;
		}
		else
		{
			break;
		}
		if (_left < _right)
		{
			t = t / 10;
		}
		else
		{
			printf("So %d khong tang dan tu trai qua phai.", n);
			return 0;
		}
	}
	printf("So %d la so tang dan tu trai qua phai.", n);
}
