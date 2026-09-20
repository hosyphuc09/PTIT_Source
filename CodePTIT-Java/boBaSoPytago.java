import java.util.ArrayList;
import java.util.Scanner;

public class boBaSoPytago {
    public static void main(String[] arge){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int[] a=new int[n];
            ArrayList<Integer> arr=new ArrayList<>();
            for(int i=0;i<n;i++){
                a[i]=sc.nextInt();
                arr.add(a[i]);
            }
            boolean f=false;
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    long sum=1L*a[i]*a[i]+ 1L*a[j]*a[j];
                    long c=(long)(Math.sqrt(sum));
                    if(c*c==sum&&arr.contains((int)c)){
                        f=true;
                        break;
                    }
                }
            }
            if(f) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
