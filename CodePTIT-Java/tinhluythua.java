import java.util.Scanner;

public class tinhluythua {
    static final long mod=1000000007L;
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        while(true){
            long a,b;
            a=sc.nextLong();
            b=sc.nextLong();
            long c=1;
            if(a==0&&b==0) break;
            while(b>0){
                if(b%2==1){
                    c=c*a%mod;
                }
                a=a*a%mod;
                b=b/2;
            }
            System.out.println(c);
        }
    }
}
