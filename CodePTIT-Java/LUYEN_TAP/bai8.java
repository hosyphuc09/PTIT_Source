import java.util.Scanner;

public class bai8 {
    static int n, k;
    static int[] a;
    static int count = 0;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        if (sc.hasNextInt()) {
            n = sc.nextInt();
            k = sc.nextInt();
            a = new int[k + 1];
            
            // Bắt đầu quay lui từ vị trí 1
            Try(1);
            
            // In ra tổng số tổ hợp theo mẫu yêu cầu
            System.out.println("Tong cong co " + count + " to hop");
        }
        sc.close();
    }

    static void Try(int i) {
        // Giá trị nhỏ nhất có thể chọn cho vị trí i là a[i-1] + 1
        // Giá trị lớn nhất có thể chọn cho vị trí i là n - k + i
        for (int j = a[i - 1] + 1; j <= n - k + i; j++) {
            a[i] = j;
            if (i == k) {
                // Đã chọn đủ k phần tử, tiến hành in kết quả
                printResult();
                count++;
            } else {
                Try(i + 1);
            }
        }
    }

    static void printResult() {
        for (int i = 1; i <= k; i++) {
            System.out.print(a[i] + (i == k ? "" : " "));
        }
        System.out.println();
    }
}