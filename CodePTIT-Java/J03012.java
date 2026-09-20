import java.util.Scanner;

public class J03012{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            String s1=sc.next();
            String s2=sc.next();
            int x=s1.length()-1;
            int y=s2.length()-1;
            int carry=0;
            String number="";
            while(x>=0||y>=0||carry!=0){
                int sum=carry;
                if(x>=0){
                    sum+=s1.charAt(x)-'0';
                    x--;
                }
                if(y>=0){
                    sum+=s2.charAt(y)-'0';
                    y--;
                }
                number+=Integer.toString(sum%10);
                carry=sum/10;
            }
            for(int i=number.length()-1;i>=0;i--){
                System.out.print(number.charAt(i));
            }
            System.out.println();
        }
    }
}