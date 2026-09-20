import java.util.Scanner;

public class quayPhai {
    public static void main(String[] arge){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            long[] a=new long[n];
            for(int i=0;i<n;i++){
                a[i]=sc.nextLong();
            }
            int dem=0;
            for(int i=0;i<n-1;i++){
                if(a[i]>a[i+1]){
                    dem=i+1;
                    break;
                }
            }
            System.out.println(dem);
        }
    }
}
