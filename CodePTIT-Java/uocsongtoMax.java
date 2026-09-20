
import java.util.Scanner;
public class uocsongtoMax {
    public static void main(String[] arge){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0){
            t--;
            long n=sc.nextLong();
            long max=1;
            for(int i=2;i<=n/i;i++){
                while(n%i==0){
                    max=i;
                    n/=i;
                }
            }
            if(n>1) max=n;
            System.out.println(max);
        }
    }
}