import java.util.Scanner;

public class Tonggiathua {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        long sum=0;
        long tich=1;
        for(int i=1;i<=n;i++){
            tich=tich*i;
            sum+=tich;
        }
        System.out.println(sum);
    }
}