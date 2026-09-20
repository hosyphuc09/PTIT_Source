import java.util.Arrays;
import java.util.Scanner;

public class maTranXoanOc {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[][] a=new int[n][n];
        int[] b=new int[n*n];
        int k=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[i][j]=sc.nextInt();
                b[k++]=a[i][j];
            }
        }
        Arrays.sort(b);
        int tren=0;
        int duoi=n-1;
        int trai=0;
        int phai=n-1;
        int r=0;
        int[][] c=new int[n][n];
        while(tren<=duoi && trai<=phai){
// trai-> phai hang tren
            for(int j=trai;j<=phai;j++){
                c[tren][j]=b[r++];
            }
            tren++;
// tren -> duoi cot phai
            for(int i=tren;i<=duoi;i++){
                c[i][phai]=b[r++];
            }
            phai--;
        
//di tu phai -> trai
            for(int j=phai;j>=trai;j--){
                c[duoi][j]=b[r++];
            }
            duoi--;
//di duoi -> len o cot trai
            for(int i=duoi;i>=tren;i--){
                c[i][trai]=b[r++];
            }
            trai++;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                System.out.print(c[i][j]+" ");
            }
            System.out.println();
        }
    }
}
