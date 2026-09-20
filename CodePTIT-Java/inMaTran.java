import java.util.Scanner;

public class inMaTran {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int[][] a=new int[n][n];
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    a[i][j]=sc.nextInt();
                }
            }
            int tren=0;
            int k=0;
            int[] b=new int[n*n];
            while(tren<n){
                for(int j=0;j<n;j++){
                    b[k++]=a[tren][j];
                }
                tren++;
                if(tren==n) break;
                for(int j=n-1;j>=0;j--){
                    b[k++]=a[tren][j];
                }
                tren++;
            }
            for(int i=0;i<k;i++){
                System.out.print(b[i]+" ");
            }
            System.out.println();
        }
    }
}
