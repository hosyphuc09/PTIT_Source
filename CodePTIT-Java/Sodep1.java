import java.util.Scanner;

public class Sodep1 {
    static boolean check(String s){
        for(int i=0;i<s.length()/2;i++){
            if(s.charAt(i)!=s.charAt(s.length()-1-i)) return false;
        }
        return true;
    }
    static boolean check2(String s){
        
       if(s.charAt(0)=='8'&&s.charAt(s.length()-1)=='8'){
        long sum=0;
        for(int i=0;i<s.length();i++){
            sum+=s.charAt(i)-'0';
        }
        if(sum%10==0) return true;
       }
        return false;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            String s=sc.next();
            if(check(s)&&check2(s)){
                System.out.println("YES");
            }else System.out.println("NO");
        }
    }
}
