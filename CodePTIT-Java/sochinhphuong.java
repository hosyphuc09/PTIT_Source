import java.util.Scanner;

public class sochinhphuong{
   
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0){
            t--;
            long n=sc.nextLong();
            double m=Math.sqrt(n);
            if(m==(int)m){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }
}