import java.util.*;
class Matrix{
    private int n,m;
    private int[][] a;
    public Matrix(int n,int m){
        this.n=n;
        this.m=m;
        a=new int[n][m];
    }
    public void nextMatrix(Scanner sc){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                a[i][j]=sc.nextInt();
            }
        }
    }
    public Matrix mul(Matrix b){
        Matrix c=new Matrix(this.n,b.m);
        for(int i=0;i<this.n;i++){
            for(int j=0;j<b.m;j++){
                for(int k=0;k<this.m;k++){
                    c.a[i][j]+=this.a[i][k]*b.a[k][j];
                }
            }
        }
        return  c;
    }
    @Override 
    public String toString(){
        StringBuilder sb=new StringBuilder();
        for(int i=0;i<this.n;i++){
            for(int j=0;j<this.m;j++){
                if(j>0) sb.append(" ");
                sb.append(this.a[i][j]);
                
            }
            sb.append("\n");
        }
        return sb.toString();
    }
}
public class J04016{
public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m = sc.nextInt(), p = sc.nextInt();
        Matrix a = new Matrix(n,m);
        a.nextMatrix(sc);
        Matrix b = new Matrix(m,p);
        b.nextMatrix(sc);
        System.out.println(a.mul(b));
    }
}