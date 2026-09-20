import java.util.Scanner;

public class SoTamPhan {
    public static boolean check(long n){
        while(n>0){
            long r=n%10;
            n/=10;
            if(r!=1&&r!=2&&r!=0) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0){
            t--;
            long n=sc.nextLong();
            if(check(n)){
                System.out.println("YES");
            }else System.out.println("NO");
        }
    }
}
