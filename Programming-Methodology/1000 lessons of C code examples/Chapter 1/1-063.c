/*Chương 1 - Bài 63 - trang 10*/

#include <stdio.h>

int main()
{
	int a = 200, b = 88, _greater, _smaller;

	_greater = a > b ? a : b;
	_smaller = a < b ? a : b;

	if (_greater % _smaller == 0)
	{
		printf("BCNN cua %d va %d la: %d", a, b, _greater);
	}
	else
	{
		for (int i = _greater * 2; i <= a * b; ++i)
		{
			if (i % a == 0 && i % b == 0)
			{
				printf("BCNN cua %d va %d la: %d", a, b, i);
				break;
			}
		}
	}
}
