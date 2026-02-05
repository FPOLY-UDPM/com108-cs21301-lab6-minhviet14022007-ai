/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


// VIẾT CODE Ở ĐÂY
#include <stdio.h>
int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int mang[n];
    int i;
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &mang[i]);
    }
    float tong = 0;
    float tb;
    int count = 0;
    for (i = 0; i < n; i++) {
        if (mang[i] % 3 == 0) {
            tong = tong + mang[i];
            count++;
        }
    }
    if (count > 0) {
        tb = tong / count;
        printf("Trung binh cong cac so chia het cho 3 la: %.2f\n", tb);
    } else {
        printf("Trong mang khong co so nao chia het cho 3.\n");
    }
    return 0;
}