#include <stdio.h>
#include <string.h>

int main() {
    char input[20];  // Mảng để lưu từng số dưới dạng chuỗi (tối đa 18 chữ số + ký tự kết thúc)
    char max_num[20] = "0";  // Khởi tạo số lớn nhất ban đầu là "0"

    // Đọc dữ liệu đến khi hết input
    while (scanf("%s", input) != EOF) {
        // So sánh chuỗi hiện tại với max_num
        if (strlen(input) > strlen(max_num) || 
            (strlen(input) == strlen(max_num) && strcmp(input, max_num) > 0)) {
            strcpy(max_num, input);  // Cập nhật max_num nếu input lớn hơn
        }
    }

    // In ra số lớn nhất
    printf("%s\n", max_num);

    return 0;
}