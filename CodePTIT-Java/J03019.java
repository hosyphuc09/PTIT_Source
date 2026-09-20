import java.util.Scanner;

public class J03019{
    public static void main(String[] arge){
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        int k=s.length();
        String s1="";
        int dex=s.charAt(k-1);
        for(int i=k-1;i>=0;i--){
            if(s.charAt(i)>=dex){
                dex=s.charAt(i);
                s1+=s.charAt(i);
            }
        }
        for(int i=s1.length()-1;i>=0;i--){
            System.out.print(s1.charAt(i));
        }
        System.out.println();
    }
}