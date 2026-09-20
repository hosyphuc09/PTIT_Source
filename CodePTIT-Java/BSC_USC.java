import java.util.Scanner;

public class BSC_USC {
    public static long usc(long a,long b){
        while(b!=0){
            long temp=a%b;
            a=b;
            b=temp;
        }
        return a;
    }
public static long bsc(long a,long b){
    return Math.abs(a/usc(a,b)*b);
}
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0){
            t--;
            long a=sc.nextInt();
            long b=sc.nextInt();
            System.out.println(bsc(a,b)+" "+usc(a,b));
        }
    }
}