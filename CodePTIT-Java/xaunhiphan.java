import java.util.Scanner;

public class xaunhiphan {
    public static char check(int n,int m){
        String temp="";
        String s1="0";
        String s2="1";
        while(temp.length()<=n){
             temp=s1+s2;
            s1=s2;
            s2=temp;
        }
        char c=temp.charAt(m);
        return c;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0){
            t--;
            int n,m;
            n=sc.nextInt();
            m=sc.nextInt();
            System.out.println(check(n, m));
        }
    }
}
