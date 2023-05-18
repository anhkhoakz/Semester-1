/*Chương 1 - Bài 61 - trang 10*/

#include <stdio.h>

int Func61(int n);

int main()
{
	int n = 9853;

	printf("n = %d \n", n);
	if (Func61(n))
	{
		printf("n la so giam dan tu trai sang phai. \n");
	}
	else
	{
		printf("n khong giam dan tu trai sang phai. \n");
	}
}

int Func61(int n)
{
	int bool = 1;
	int t = n;
	int r = -1;
	int l = -1;

	while (t >= 10)
	{ // Chỉ cần kiểm tra khi còn 2 chữ số. Nếu còn 1 chữ số, khi kiểm tra thì số trước nó theo cách viết code sẽ là số 0 => làm sai chương trình
		r = t % 10;
		l = (t / 10) % 10;
		if (l <= r)
		{
			bool = 0;
			break;
		}
		t = t / 10;
	}

	return bool;
}
