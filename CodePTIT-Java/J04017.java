import java.util.Scanner;

class Matrix{
    private int n,m;
    private int[][] a;
    public Matrix(int n,int m){
        this.n=n;
        this.m=m;
        a=new int[n][m];
    }
    public void nextMatrix(Scanner sc){
        for(int i=0;i<this.n;i++){
            for(int j=0;j<this.m;j++){
                a[i][j]=sc.nextInt();
            }
        }
    }
    public Matrix trans(){
        Matrix c=new Matrix(m, n);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                c.a[j][i]=this.a[i][j];
            }
        }
        return c;
    }
    public Matrix mul(Matrix b){
        Matrix c=new Matrix(n, n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<m;k++){
                    c.a[i][j]+=this.a[i][k]*b.a[k][j];
                }
            }
        }
        return c;
    }
    @Override 
    public String toString(){
        StringBuilder sb=new StringBuilder();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(j>0) sb.append(" ");
                sb.append(a[i][j]);
            }
            sb.append("\n");
        }
        return sb.toString();
    }
}
public class J04017{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
             int n = sc.nextInt(), m = sc.nextInt();
             Matrix a = new Matrix(n,m);
             a.nextMatrix(sc);
             Matrix b = a.trans();
             System.out.println(a.mul(b));
        }
    }
}