import java.math.BigInteger;
import java.util.Scanner;

public class BSCNN {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            BigInteger a=sc.nextBigInteger();
            BigInteger b=sc.nextBigInteger();
            BigInteger gcd=a.gcd(b);
            BigInteger lmd=a.divide(gcd).multiply(b);
            System.out.println(lmd);
        }
    }
}
