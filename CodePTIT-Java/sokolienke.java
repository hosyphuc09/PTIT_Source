import java.util.Scanner;

public class sokolienke {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0){
            t--;
            long n=sc.nextLong();
            long k=n%10;
            n/=10;
            boolean f=false;
            long sum=k;
            while(n>0){
                long r=n%10;
                sum+=r;
                n/=10;
                if(k-r==2||r-k==2) f=true;
                else{
                    f=false;
                    break;
                }
                k=r;
            }
            if(f&&sum%10==0){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }
}