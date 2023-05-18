#include <stdio.h>

int main(void)
{
	// Khai bao bien
	int m, h;
	double amount = 0;

	// Nhan m, h
	printf("Nhap vao m: ");
	scanf("%d", &m);
	printf("Nhap vao h: ");
	scanf("%d", &h);

	//	//Tinh
	//	if(h <= 40){
	//		amount = h * m;
	//	}
	//	else {
	//		amount = 40 * m;
	//
	//		if(h <= 45){
	//			amount = amount + (h - 40) * 1.8 * m;
	//		}
	//		else {
	//			amount = amount + 5 * 1.8 * m;
	//			if (h <= 50){
	//				amount = amount + (h - 45) * 2.5 * m;
	//			}
	//			else{
	//				amount = amount + 5 * 1.8 * m;
	//
	//				amount = amount + (h - 50) * 2.6 * m;
	//			}
	//		}
	//	}

	if (h > 50)
	{
		amount = m * (40 + 5 * 1.8 + 5 * 2.5 + (h - 50) * 2.6);
	}

	if (h > 45 && h <= 50)
	{
		amount = m * 40 + 5 * 1.8 * m + (h - 45) * 2.5 * m;
	}

	// In ket qua
	printf("Amount: %lf", amount);
}
