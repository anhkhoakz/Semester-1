#include <stdio.h>
#define max 100

typedef struct SinhVien
{
    char MaSoSinhVien[9];
    char TenSinhVien[max];
    char SinhNhat[10];
    char GioiTinh[4];
    float Toan, Ly, Hoa;
    float DiemA00;
} DiemSinhVien;

int inputn();
void NhapSinhVien(DiemSinhVien SinhVien[], int n);
void Xuat1SinhVien(DiemSinhVien SinhVien);
void XuatTatCaSinhVien(DiemSinhVien SinhVien[], int n);

int main()
{
    int n;
    n = inputn();
    DiemSinhVien SinhVien[max];
    NhapSinhVien(SinhVien, n);
    XuatTatCaSinhVien(SinhVien, n);
    return 0;
}

int inputn()
{
    int n;
    do
    {
        printf("Nhap vao so nguyen [1, 10]: ");
        scanf("%d", &n);
        if (n < 1 || n > 10)
        {
            printf("Nhap lai!\n");
        }
    } while (n < 1 || n > 10);
    return n;
}

void NhapSinhVien(DiemSinhVien SinhVien[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("--------Nhap vao sinh vien %d--------\n", i + 1);
        printf("Nhap vao ma so sinh vien: ");
        scanf("%s", SinhVien[i].MaSoSinhVien);
        printf("Nhap vao ten: ");
        scanf("%s", SinhVien[i].TenSinhVien);
        printf("Nhap ngay thang nam sinh: ");
        scanf("%s", SinhVien[i].SinhNhat);
        printf("Nhap gioi tinh: ");
        scanf("%s", SinhVien[i].GioiTinh);
        printf("Nhap diem toan: ");
        scanf("%f", &SinhVien[i].Toan);
        printf("Nhap diem ly: ");
        scanf("%f", &SinhVien[i].Ly);
        printf("Nhap diem hoa: ");
        scanf("%f", &SinhVien[i].Hoa);
        SinhVien[i].DiemA00 = (SinhVien[i].Toan + SinhVien[i].Ly + SinhVien[i].Hoa) / 3;
    }
}

void Xuat1SinhVien(DiemSinhVien SinhVien)
{
    printf("\nMa so sinh vien: %s", SinhVien.MaSoSinhVien);
    printf("\nTen sinh vien: %s", SinhVien.TenSinhVien);
    printf("\nNgay thang nam sinh: %s", SinhVien.SinhNhat);
    printf("\nGioi tinh: %s", SinhVien.GioiTinh);
    printf("\nDiem toan: %.1f", SinhVien.Toan);
    printf("\nDiem ly: %.1f", SinhVien.Ly);
    printf("\nDiem hoa: %.1f", SinhVien.Hoa);
    printf("\nDiem A00: %.1f", SinhVien.DiemA00);
}
void XuatTatCaSinhVien(DiemSinhVien SinhVien[], int n)
{
    printf("\t--------Danh Sach Sinh Vien--------\t\n");
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\n--------Sinh vien thu %d--------", i + 1);
        Xuat1SinhVien(SinhVien[i]);
    }
}