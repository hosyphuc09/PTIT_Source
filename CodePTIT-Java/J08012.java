import java.util.Scanner;

public class J08012 {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] degree=new int[n+1];
        for(int i=1;i<n;i++){
            int u=sc.nextInt();
            int v=sc.nextInt();
            degree[u]++;
            degree[v]++;
        }
        boolean f=false;
        for(int i=1;i<=n;i++){
            if(degree[i]==n-1){
                f=true;
                break;
            }
        }
        if(f) System.out.println("Yes");
        else System.out.println("No");
    }
}
