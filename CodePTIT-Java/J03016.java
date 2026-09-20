import java.util.Scanner;

public class J03016 {
    public static void main(String[] arge){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            String s=sc.next();
            long sum=0;
            for(int i=0;i<s.length();i++){
                int number=s.charAt(i)-'0';
                if(i%2==0) sum+=number;
                else sum-=number;
            }
            if(sum%11==0) System.out.println("1");
            else System.out.println("0");
        }
    }
}
