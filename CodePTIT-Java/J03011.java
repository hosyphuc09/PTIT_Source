import java.util.Scanner;

public class J03011 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            long a=sc.nextLong();
            String b=sc.next();
            long r=0;
            for(char x:b.toCharArray()){
                r=(r*10+(x-'0'))%a;
            }
            while(r!=0){
                long temp=a%r;
                a=r;
                r=temp;
            }
            System.out.println(a);
        }
    }
}
