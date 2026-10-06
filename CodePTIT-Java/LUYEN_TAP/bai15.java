import java.math.BigInteger;
import java.util.Scanner;

public class bai15 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        if (sc.hasNextInt()) {
            int t = sc.nextInt();
            while (t-- > 0) {
                // Đọc hai xâu số nguyên lớn X và Y
                BigInteger x = sc.nextBigInteger();
                BigInteger y = sc.nextBigInteger();
                
                // Tính tổng X + Y
                BigInteger sum = x.add(y);
                
                // In ra kết quả
                System.out.println(sum);
            }
        }
        sc.close();
    }
}