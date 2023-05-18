/*Chương 3 - Bài 82 - trang 19*/

#include <stdio.h>
int main()
{
	int a, b, c, max;
	printf("Nhap a: ");
	fflush(stdout);
	scanf("%d", &a);
	printf("Nhap b: ");
	fflush(stdout);
	scanf("%d", &b);
	printf("Nhap c: ");
	fflush(stdout);
	scanf("%d", &c);
	max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	printf("So lon nhap trong 3 so a, b, c la: %d \n", max);
}
