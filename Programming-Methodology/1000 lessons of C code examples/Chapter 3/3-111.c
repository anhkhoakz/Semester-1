/*Chương 3 - Bài 111 - trang 39*/

#include <stdio.h>

void Func111_A(int h);
void Func111_B(int h);
void Func111_C(int h);
void Func111_D(int h);

int main()
{
	printf("111. a) \n");
	Func111_A(4);
	printf("\n");
	printf("111. b) \n");
	Func111_B(4);
	printf("\n");
	printf("111. c) \n");
	Func111_C(4);
	printf("\n");
	printf("111. d) \n");
	Func111_D(4);
}

void Func111_A(int h)
{
	int w = 1;
	for (int i = 2; i <= h; ++i)
	{
		w = w + 2;
	}
	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < w; ++j)
		{
			if (j >= w / 2 - i && j <= w / 2 + i)
			{
				printf("*\t");
			}
			else
			{
				printf(" \t");
			}
		}
		printf("\n");
	}
}

void Func111_B(int h)
{
	int w = 1;
	for (int i = 2; i <= h; ++i)
	{
		w = w + 2;
	}
	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < w; ++j)
		{
			if (j == w / 2 - i || j == w / 2 + i || i == h - 1)
			{
				printf("*\t");
			}
			else
			{
				printf(" \t");
			}
		}
		printf("\n");
	}
}

void Func111_C(int h)
{
	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < h; ++j)
		{
			if (j <= i)
			{
				printf("*\t");
			}
			else
			{
				printf(" \t");
			}
		}
		printf("\n");
	}
}

void Func111_D(int h)
{
	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < h; ++j)
		{
			if (j == 0 || j == i || i == h - 1)
			{
				printf("*\t");
			}
			else
			{
				printf(" \t");
			}
		}
		printf("\n");
	}
}
