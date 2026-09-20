import java.util.Scanner;

public class soDep3 {
     static boolean check1(String s){
        for(int i=0;i<s.length()/2;i++){
            if(s.charAt(i)!=s.charAt(s.length()-1-i)) return false;
        }
        return true;
    }
    static boolean check2(String s){
        for(char c:s.toCharArray()){
            int x=c-'0';
            if(!check(x)) return false;
        }
        return true;
    }
    static boolean check(int n){
        if(n<2) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            String s=sc.next();
           if(check2(s)&&check1(s)){
            System.out.println("YES");
           }else System.out.println("NO");
        }
    }
}
