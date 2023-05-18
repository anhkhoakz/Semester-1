#include <stdio.h>

void checkMoney(int, int);

int main()
{
    int Coca = 3000, Green_tea = 6000, Sting = 4000, Milk = 5000, Water = 3000;
    int userChoice, userMoney;

    printf("Thuc don:\n");
    printf("1. Coca:\t%dd\n", Coca);
    printf("2. Trà xanh:\t%dd\n", Green_tea);
    printf("3. Sting:\t%dd\n", Sting);
    printf("4. Sữa tươi:\t%dd\n", Milk);
    printf("5. Nước suối:\t%dd\n", Water);

    do
    {
        printf("Vui long cho tien vao:\n");
        scanf("%d", &userMoney);
        if (userMoney < 1)
        {
            printf("Vui long cho vao so tien hop le!\n");
        }
    } while (userMoney < 1);

    do
    {
        printf("Vui long chon loai nuoc giai khat (1 - 5):\n");
        scanf("%d", &userChoice);
        if (userMoney < 1)
        {
            printf("Vui long chon ma san pham hop le\n");
        }
    } while (userChoice < 1);

    switch (userChoice)
    {
    case 1:
        printf("Khach hang da mua Coca\nSo tien phai tra la: %dd\n", Coca);
        checkMoney(userMoney, Coca);
        break;
    case 2:
        printf("Khach hang da mua Tra xanh\nSo tien phai tra la: %dd\n", Green_tea);
        checkMoney(userMoney, Green_tea);
        break;
    case 3:
        printf("Khach hang da mua Sting\nSo tien phai tra la: %dd\n", Sting);
        checkMoney(userMoney, Sting);
        break;
    case 4:
        printf("Khach hang da mua Sua tuoi\nSo tien phai tra la: %dd\n", Milk);
        checkMoney(userMoney, Milk);
        break;
    case 5:
        printf("Khach hang da mua Nuoc suoi\nSo tien phai tra la: %dd\n", Water);
        checkMoney(userMoney, Water);
        break;
    }

    return 0;
}

void checkMoney(int userMoney, int item)
{
    if (userMoney < item)
    {
        printf("So tien khong du, vui long cho them %dd\n", item - userMoney);
    }
    else if (userMoney > item)
    {
        printf("Vui long nhan san pham va %dd tien thua", userMoney - item);
    }
    else
    {
        printf("Vui long nhan san pham");
    }
}