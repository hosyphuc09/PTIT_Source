import java.util.*;

public class J03013 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            String s1=sc.next();
            String s2=sc.next();
            if(s1.length() < s2.length()){
                String temp = s1;
                s1 = s2;
                s2 = temp;
            }
            else if(s1.length() == s2.length() && s1.compareTo(s2) < 0){
                String temp = s1;
                s1 = s2;
                s2 = temp;
            }
            int x=s1.length()-1;
            int y=s2.length()-1;
            int carry=0;
            String digital="";
            while(x>=0||y>=0){
                int a=0;
                int b=0;
                if(x>=0){
                    a=s1.charAt(x)-'0';
                    x--;
                }
                if(y>=0){
                    b=s2.charAt(y)-'0';
                    y--;
                }
                int hieu=a-b-carry;
                if(hieu<0){
                    hieu+=10;
                    carry=1;
                }else{
                    carry=0;
                }

                digital+=Integer.toString(hieu);
            }
            for(int i=digital.length()-1;i>=0;i--){
                System.out.print(digital.charAt(i));
            }
            System.out.println();
        }
    }
}
