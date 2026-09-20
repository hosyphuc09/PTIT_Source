import java.util.Scanner;

public class J03015 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s1=sc.next();
        String s2=sc.next();
        s1=s1.replaceFirst("^0+", "");
        s2=s2.replaceFirst("^0+", "");
        if(s1.length() == 0) s1 = "0";
        if(s2.length() == 0) s2 = "0";
        int carry=0;
        String digital="";
        boolean ok=false;
        if(s1.length()<s2.length()||(s1.length()==s2.length()&&s1.compareTo(s2)<0)){
            String temp=s1;
            s1=s2;
            s2=temp;
            ok=true;
        }
        int x=s1.length()-1;
        int y=s2.length()-1;
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
        while(digital.length()>1&& digital.charAt(digital.length()-1)=='0'){
            digital=digital.substring(0,digital.length()-1);
        }
        if(ok){
            System.out.print("-");
        }
        for(int i=digital.length()-1;i>=0;i--){
            System.out.print(digital.charAt(i));
        }
        System.out.println();
    }
}
