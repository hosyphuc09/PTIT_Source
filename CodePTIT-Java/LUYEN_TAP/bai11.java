import java.util.Scanner;

public class bai11 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        if (sc.hasNextInt()) {
            int t = sc.nextInt();
            for (int test = 1; test <= t; test++) {
                int n = sc.nextInt();
                int m = sc.nextInt();
                
                int[][] a = new int[n][m];
                int[][] b = new int[m][n]; // Ma trận chuyển vị b = a^T
                
                // Nhập ma trận A và tạo ma trận chuyển vị B
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        a[i][j] = sc.nextInt();
                        b[j][i] = a[i][j]; // Ma trận chuyển vị đảo chỉ số hàng và cột
                    }
                }
                
                // Tính ma trận tích C = A * B (kích thước n x n)
                int[][] c = new int[n][n];
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        c[i][j] = 0;
                        for (int k = 0; k < m; k++) {
                            c[i][j] += a[i][k] * b[k][j];
                        }
                    }
                }
                
                // In kết quả cho từng bộ test
                System.out.println("Test " + test + ":");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        System.out.print(c[i][j] + (j == n - 1 ? "" : " "));
                    }
                    System.out.println();
                }
            }
        }
        sc.close();
    }
}