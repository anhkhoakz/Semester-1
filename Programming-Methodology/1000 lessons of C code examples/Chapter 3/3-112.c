/*Chương 3 - Bài 112 - trang 39*/

#include <stdio.h>

void Func112_A(int w, int h);
void Func112_B(int w, int h);

int main()
{
	printf("112. a) \n");
	Func112_A(7, 4);
	printf("\n");
	printf("112. b) \n");
	Func112_B(7, 4);
}

void Func112_A(int w, int h)
{
	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < w; ++j)
		{
			printf("*\t");
		}
		printf("\n");
	}
}

void Func112_B(int w, int h)
{
	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < w; ++j)
		{
			if (i == 0 || i == h - 1 || j == 0 || j == w - 1)
				printf("*\t");
			else
				printf(" \t");
		}
		printf("\n");
	}
}
