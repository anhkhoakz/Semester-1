/*Chương 3 - Bài 85 - trang 24*/

#include <stdio.h>

int main()
{
	int t;

	printf("Nhap thang: ");
	fflush(stdout);
	scanf("%d", &t);
	switch (t)
	{
	case 1:
	case 2:
	case 3:
		printf("Quy 1. \n");
		break;
	case 4:
	case 5:
	case 6:
		printf("Quy 2. \n");
		break;
	case 7:
	case 8:
	case 9:
		printf("Quy 3. \n");
		break;
	case 10:
	case 11:
	case 12:
		printf("Quy 4. \n");
		break;
	default:
		printf("Out of range. \n");
	}
}
