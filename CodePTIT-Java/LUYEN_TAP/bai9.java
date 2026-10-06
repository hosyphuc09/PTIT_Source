import java.util.Scanner;

public class bai9 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        if (sc.hasNextInt()) {
            int n = sc.nextInt();
            int s = sc.nextInt();
            
            // Trường hợp không hợp lệ
            if (s > 9 * n || (s == 0 && n > 1)) {
                System.out.println("-1 -1");
            } else {
                System.out.println(findMin(n, s) + " " + findMax(n, s));
            }
        }
        sc.close();
    }

    // Hàm tìm số nhỏ nhất có N chữ số có tổng bằng S
    static String findMin(int n, int s) {
        if (n == 1 && s == 0) return "0";
        
        int[] digits = new int[n];
        // Giữ lại 1 đơn vị cho chữ số đầu tiên để số không bị bắt đầu bằng 0
        s -= 1; 

        // Điền từ chữ số cuối cùng lên đầu (tham lam chữ số lớn nhất ở cuối)
        for (int i = n - 1; i > 0; i--) {
            if (s > 9) {
                digits[i] = 9;
                s -= 9;
            } else {
                digits[i] = s;
                s = 0;
            }
        }
        // Chữ số đầu tiên bằng 1 + phần tổng còn dư
        digits[0] = 1 + s;

        StringBuilder sb = new StringBuilder();
        for (int d : digits) {
            sb.append(d);
        }
        return sb.toString();
    }

    // Hàm tìm số lớn nhất có N chữ số có tổng bằng S
    static String findMax(int n, int s) {
        if (n == 1 && s == 0) return "0";

        int[] digits = new int[n];
        // Điền từ chữ số đầu tiên xuống cuối (tham lam chữ số lớn nhất ở đầu)
        for (int i = 0; i < n; i++) {
            if (s >= 9) {
                digits[i] = 9;
                s -= 9;
            } else {
                digits[i] = s;
                s = 0;
            }
        }

        StringBuilder sb = new StringBuilder();
        for (int d : digits) {
            sb.append(d);
        }
        return sb.toString();
    }
}