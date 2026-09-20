import java.util.Scanner;

public class tonguocso {
    public static long check(long n){
       long sum=0;
       while(n%2==0){
        sum+=2;
        n/=2;
       }
       for(int i=3;i<=n/i;i+=2){
        while(n%i==0){
            n/=i;
            sum+=i;
        }
       }
       if(n>1) sum+=n;
       return sum;
    }
    public static void main(String[] arge){
        Scanner sc=new Scanner(System.in);
      
            int n=sc.nextInt();
            long tong=0;
            for(int i=1;i<=n;i++){
                long m=sc.nextLong();
                tong+=check(m);
            }
            System.out.println(tong);
        }
    }

