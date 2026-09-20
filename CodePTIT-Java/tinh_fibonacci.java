import java.util.Scanner;

public class tinh_fibonacci {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0){
            t--;
            int n=sc.nextInt();
            long fibo=check(n);
            System.out.println(fibo);
        }
    }
    public static long check(int n){
        long a1=1;
        if(n==1) return a1;
        long a2=1;
        if(n==2) return a2;
        int k=2;
        while(k<92){
            k++;
            long temp=a1+a2;
            a1=a2;
            a2=temp;
            if(k==n) break;
        }
        return a2;
    }
}
