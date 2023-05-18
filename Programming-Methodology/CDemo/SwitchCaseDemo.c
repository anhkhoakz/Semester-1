#include <stdio.h>

void in_thong_bao(double total, double money);

int main(void)
{
	// Khai bao bien
	int choice;
	double money;
	// In ra man hinh cac loai nuoc dang ban va gia
	//...

	// Chon 1 loai nuoc muon mua
	printf("Chon tu 1 - 5 :");
	scanf("%d", &choice);

	// Nhan so tien nguoi dung nhap vao
	printf("Nhan so tien: ");
	scanf("%lf", &money);

	// Tinh va thong bao so tien con lai
	switch (choice)
	{
	case 1:
		in_thong_bao(3000, money);
		printf("\nHen gap lai");
		break;
	case 2:
		in_thong_bao(6000, money);
		printf("\nHen gap lai");
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	}
}

void in_thong_bao(double total, double money)
{
	if (total == money)
	{
		printf("Cam on da su dung san pham");
	}
	else if (total < money)
	{
		printf("Cam on da su dung san pham. So tien con lai la %lf",
			   (money - total));
	}
	else
	{
		printf("Rat tiec so tien ban chua du de dung san pham nay");
	}
}
