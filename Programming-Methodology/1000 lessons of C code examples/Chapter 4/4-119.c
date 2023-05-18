/*Chương 4 - Bài 119 - trang 50*/

#include <stdio.h>

int KT_SoNguyenTo(int x);
void Func119(int n);

int main()
{
	int n = 0;

	printf("Nhap n: ");
	// #ifdef DEBUG
	fflush(stdout);
	// #endif
	scanf("%d", &n);

	printf("So nguyen to nho hon n: ");
	Func119(n);
}

int KT_SoNguyenTo(int x)
{
	int _bool = 1;
	if (x < 2)
	{
		_bool = 0;
	}
	else
	{
		if (x == 2)
		{
			_bool = 1;
		}
		else
		{
			int d = 3;
			while (d < x)
			{
				if (x % d == 0)
					break;
				d = d + 2;
			}
			if (d == x)
			{
				_bool = 1;
			}
			else
			{
				_bool = 0;
			}
		}
	}
	return _bool;
}

void Func119(int n)
{
	for (int i = 0; i < n; ++i)
	{
		if (KT_SoNguyenTo(i + 1))
		{
			printf("%d  ", i + 1);
		}
	}
}
