/******************************************************************************
 * Họ và tên: [VÕ TUYẾT NHƯ]
 * MSSV:      [PS48854]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI 
//  Input: nhập vào 1 chuỗi 
//  Output: Số lượng nguyên âm và phụ âm trong chuỗi 
//  Biết rằng: Nguyên âm gồm: a,e,i,o,y,u


// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <string.h>
#include <ctype.h> // hàm tolower (chuyển chữ hoa thành chữ thường)

int main() {
    char str[100];
    int nguyenAm = 0, phuAm = 0;

    printf("Vui lòng nhập một chuỗi: ");
    // Sử dụng fgets để đọc được cả chuỗi có khoảng trắng
    fgets(str, sizeof(str), stdin);
    for (int i = 0; i < strlen(str); i++) {
        char c = tolower(str[i]); // Chuyển về chữ thường để dễ so sánh
        if (c >= 'a' && c <= 'z') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
                nguyenAm++;
            } else {
                phuAm++;
            }
        }
    }

    printf("Kết quả:\n");
    printf("- Số lượng nguyên âm: %d\n", nguyenAm);
    printf("- Số lượng phụ âm: %d\n", phuAm);

    return 0;
}