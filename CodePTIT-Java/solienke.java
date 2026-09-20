import java.util.Scanner;

public class solienke {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0){
            t--;
            long n=sc.nextLong();
            long k=n%10;
            n/=10;
            boolean f=false;
            while(n>0){
                long r=n%10;
                n/=10;
                if(k-r==1||r-k==1) f=true;
                else{
                    f=false;
                    break;
                }
                k=r;
            }
            if(f){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }
}
