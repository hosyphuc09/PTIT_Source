import java.util.Scanner;

public class J03025 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            String s=sc.next();
            int dem=0;
            int n=s.length();
            for(int i=0;i<s.length()/2;i++){
                if(s.charAt(i)!=s.charAt(n-i-1)){
                    dem++;
                }
            }
            if(dem==1){
                System.out.println("YES");
            }else if(dem==0){
                if(n%2==1) System.out.println("YES");
                else System.out.println("NO");
            }else System.out.println("NO");
        }
    }
}
