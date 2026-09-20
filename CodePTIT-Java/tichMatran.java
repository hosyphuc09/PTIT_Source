import java.util.Scanner;

public class tichMatran {
    public static void main(String[] arge){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        int dem=0;
        while(t-->0){
            dem++;
            int n,m;
            n=sc.nextInt();
            m=sc.nextInt();
            int[][] a=new int[n][m];
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    a[i][j]=sc.nextInt();
                }
            }
            int[][] b=new int[m][n];
            for(int j=0;j<m;j++){
                for(int i=0;i<n;i++){
                    b[j][i]=a[i][j];
                }
            }     
            int[][] c=new int[n][n];
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    for(int k=0;k<m;k++){
                        c[i][j]+=a[i][k]*b[k][j];
                    }
                }
            }
            System.out.println("Test "+dem+": ");
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    System.out.print(c[i][j]+"  ");
                }
                System.out.println();
            }
        }
    }
}
