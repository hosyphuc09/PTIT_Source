import java.util.Scanner;

public class SoTP {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            boolean f=false;
            while(n>0){
                int temp=n%10;
                n/=10;
                if(temp!=0&&temp!=1&&temp!=2){
                    f=true;
                    break;
                }
            }
            if(f){
                System.out.println("NO");
            }else System.out.println("YES");
        }
    }
}
