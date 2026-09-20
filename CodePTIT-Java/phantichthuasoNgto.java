import java.util.Scanner;

public class phantichthuasoNgto {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        int l=0;
        while(t>0){
            t--;
            l++;
            long n=sc.nextLong();
            System.out.print("Test "+l+": ");
            for(int i=2;i*i<n;i++){
               if(n%i==0){
                int k=0;
                while(n%i==0){
                    n/=i;
                    k++;
                }
                System.out.print(i+"("+k+")"+" ");
               }
            }
            if(n>1) System.out.println(n+"(1)");
            System.out.println();
        }
    }
}
