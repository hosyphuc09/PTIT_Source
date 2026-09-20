import java.util.Scanner;

public class ktra_fibonacci {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0){
            t--;
            long n=sc.nextLong();
            if(check(n)){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }
    public static boolean check(long n){
        if(n<0) return false;
        long a1=1;
        if(n==1||n==0) return true;
        long a2=1;
        while(a2<=n){
           if(a2==n) return true;
           if(a1>Long.MAX_VALUE-a2){
            return false;
           }
            long temp=a1+a2;
            a1=a2;
            a2=temp;
            
        }
       return false;
    }
}
