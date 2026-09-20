import java.util.Scanner;

public class J03014{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s1=sc.next();
        String s2=sc.next();
        int x=s1.length()-1;
        int y=s2.length()-1;
        int carry=0;
        String digital="";
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
            digital+=Integer.toString(sum%10);
            carry=sum/10;
        }
        while(digital.length()>1&& digital.charAt(digital.length()-1)=='0'){
            digital=digital.substring(0,digital.length()-1);
        }
        for(int i=digital.length()-1;i>=0;i--){
            System.out.print(digital.charAt(i));
        }
    }
}