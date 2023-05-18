/*Chương 1 - Bài 60 - trang 9*/

#include <stdio.h>

int Func60(int n);

int main()
{
	int n = 124;

	printf("n = %d \n", n);
	if (Func60(n))
	{
		printf("n la so tang dan tu trai sang phai. \n");
	}
	else
	{
		printf("n khong tang dan tu trai sang phai. \n");
	}
}

int Func60(int n)
{
	int bool = 1;
	int t = n;
	int r = -1;
	int l = -1;

	while (t >= 10)
	{ // Chỉ cần kiểm tra khi còn 2 chữ số. Nếu còn 1 chữ số, khi kiểm tra thì số trước nó theo cách viết code sẽ là số 0 => làm sai chương trình
		r = t % 10;
		l = (t / 10) % 10;
		if (l >= r)
		{
			bool = 0;
			break;
		}
		t = t / 10;
	}

	return bool;
}
