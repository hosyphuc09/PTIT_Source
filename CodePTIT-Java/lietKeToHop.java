import java.util.Scanner;

public class lietKeToHop {
    static int[] arr=new int[100];
    static int n,k;
    static int dem=0;
    static void in(){
        boolean f=false;
        for(int i=1;i<=k-1;i++){
            if(arr[i]>arr[i+1]){
                f=true;
                break;
            }
        }
        if(!f){
            dem++;
            for(int i=1;i<=k;i++){
                System.out.print(arr[i]+" ");
            }
            System.out.println();
        }
    }
    static void Try(int m){
        for(int i=arr[m-1]+1;i<=n-k+m;i++){
            arr[m]=i;
            if(m==k) in();
            else Try(m+1);
        }
    }
    public static void main(String[] arge){
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        k=sc.nextInt();
        Try(1);
        System.out.println("Tong cong co "+dem+" to hop");
    }
}
