/******************************************************************************
 * Họ và tên: [VÕ TUYẾT NHƯ]
 * MSSV:      [PS48854]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD 
//  Input: Nhập vào username và password 
//  Output: Đăng nhập thành công hay không thành công

#include <stdio.h>
#include <string.h>

int main() {
    char userMau[] = "vtnin05";
    char passMau[] = "166166";

    // Khai báo biến để người dùng nhập vào
    char userNhap[50];
    char passNhap[50];

    printf("--- ĐĂNG NHẬP ---\n");

    printf("Username: ");
    scanf("%s", userNhap);

    printf("Password: ");
    scanf("%s", passNhap);

    // So sánh chuỗi nhập vào với mẫu
    // strcmp trả về 0 nếu hai chuỗi giống hệt nhau
    if (strcmp(userNhap, userMau) == 0 && strcmp(passNhap, passMau) == 0) {
        printf("\nĐăng nhập thành công! Chào mừng %s.\n", userNhap);
    } else {
        printf("\nĐăng nhập thất bại! Sai Username hoặc Password.\n");
    }

    return 0;
}