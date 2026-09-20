import java.math.BigInteger;
import java.util.Scanner;

public class chiaHet {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            BigInteger n=sc.nextBigInteger();
            BigInteger m=sc.nextBigInteger();
            if(n.remainder(m).equals(BigInteger.ZERO)||m.remainder(n).equals(BigInteger.ZERO)){
                System.out.println("YES");
            }else System.out.println("NO");
        }
    }
}
