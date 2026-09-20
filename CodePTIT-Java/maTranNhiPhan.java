import java.util.Scanner;

public class maTranNhiPhan {
    public static void main(String[] arge){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[][] a=new int[n+1][3];
        for(int i=0;i<n;i++){
            for(int j=0;j<3;j++){
                a[i][j]=sc.nextInt();
            }
        }
        int dem=0;
        for(int i=0;i<n;i++){
            int so1=0;
            int so0=0;
            for(int j=0;j<3;j++){
                if(a[i][j]==1) so1++;
                else so0++;
            }
            if(so1>so0) dem++;
        }
        System.out.println(dem);
    }
}
