import java.util.Scanner;

public class chiatamgiac {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0){
            int n,m;
            n=sc.nextInt();
            m=sc.nextInt();
            
            for(int i=1;i<n;i++){
                double x=Math.sqrt((double)i/n)*m;
                System.out.printf("%.6f",x);
                System.out.print(" ");
                
            }
            System.out.println();
            t--;
        }
    }
}
