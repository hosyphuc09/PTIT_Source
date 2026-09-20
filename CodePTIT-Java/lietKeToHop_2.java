import java.util.Scanner;

public class lietKeToHop_2 {
    static int n,k;
    static int[] a=new int[100];
    static int dem=0;
    static void in(){
        boolean f=false;
        for(int i=1;i<=k-1;i++){
            if(a[i]>a[i+1]){
                f=true;
                break;
            }
        }
        if(!f){
            for(int i=1;i<=k;i++){
                System.out.print(a[i]);
            }
            System.out.print(" ");
            dem++;
        }
    }
    static void Try(int m){
        for(int i=a[m-1]+1;i<=n-k+m;i++){
            a[m]=i;
            if(m==k) in();
            else Try(m+1);
        }
    }
    public static void main(String[] arge){
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        k=sc.nextInt();
        Try(1);
        System.out.println();
        System.out.println("Tong cong co "+dem+" to hop");
    }
}
