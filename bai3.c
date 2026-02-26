/******************************************************************************
 * Họ và tên: [VÕ TUYẾT NHƯ]
 * MSSV:      [PS48854]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI 
//  Input: Nhập 5 chuỗi bất kỳ 
//  Output: Thứ tự các chuỗi đã được sắp xếp  

#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[5][50]; // Khai báo mảng 2 chiều chứa 5 chuỗi, mỗi chuỗi tối đa 50 ký tự
    char tam[50];      // Biến trung gian để hoán đổi

    printf("--- SẮP XẾP 5 CHUỖI BẤT KỲ ---\n");

    // Bước 1: Nhập dữ liệu 
    for (int i = 0; i < 5; i++) {
        printf("Nhập chuỗi %d: ", i + 1);
        scanf("%s", chuoi[i]); 
    }

    // Bước 2: Thuật toán sắp xếp (Interchange Sort)
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            // Nếu chuoi[i] đứng sau chuoi[j] trong từ điển (strcmp > 0)
            if (strcmp(chuoi[i], chuoi[j]) > 0) {
                // Thực hiện hoán đổi vị trí
                strcpy(tam, chuoi[i]);
                strcpy(chuoi[i], chuoi[j]);
                strcpy(chuoi[j], tam);
            }
        }
    }

    printf("\nDanh sách chuỗi sau khi sắp xếp:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, chuoi[i]);
    }

    return 0;
}