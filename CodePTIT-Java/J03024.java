import java.util.*;
public class J03024 {
    public static void main(String[] arge){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            String s=sc.next();
            boolean f=false;
            for(int i=0;i<s.length();i++){
                if(s.charAt(i)<'0'||s.charAt(i)>'9'){
                    f=true;
                    break;
                }
            }
            if(f){
                System.out.println("INVALID");
                continue;
            }
            if(s.length()%2==0){
                int chan=0;
                int le=0;
                for(int i=0;i<s.length();i++){
                    int number=s.charAt(i)-'0';
                    if(number%2==0) chan++;
                    else le++;
                }
                if(chan>le) System.out.println("YES");
                else System.out.println("NO");
            }
            if(s.length()%2==1){
                int chan=0;
                int le=0;
                for(int i=0;i<s.length();i++){
                    int number=s.charAt(i)-'0';
                    if(number%2==0) chan++;
                    else le++;
                }
                if(chan<le) System.out.println("YES");
                else System.out.println("NO");
            }
        }
    }
}
