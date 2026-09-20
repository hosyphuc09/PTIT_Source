import java.util.Scanner;

public class so_4vaso_7 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        long n=sc.nextLong();
        int sum=0;
        while(n>0){
            long r=n%10;
            n/=10;
            if(r==4||r==7) sum++;
        }
        if(sum==4||sum==7) System.out.println("YES");
        else System.out.println("NO");
    }
}
