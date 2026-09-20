import java.util.Scanner;

public class tongsonguyenduong {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0){
            long a=sc.nextLong();
             long sum=a*(a+1)/2;
            
            System.out.println(sum);
            t--;
        }
    }
}
