import java.math.BigInteger;
import java.util.Scanner;

public class BSCNNcuaN {
    static BigInteger lmd(BigInteger a,BigInteger b){
        return a.divide(a.gcd(b)).multiply(b);
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            BigInteger number=BigInteger.ONE;
            for(int i=2;i<=n;i++){
                number=lmd(number,BigInteger.valueOf(i));
            }
            System.out.println(number);
        }  
    }
}
