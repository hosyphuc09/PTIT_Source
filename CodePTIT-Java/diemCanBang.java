import java.util.Scanner;

public class diemCanBang {
    public static void main(String[] arge){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int[] a=new int[n];
            int sum=0;
            for(int i=0;i<n;i++){
                a[i]=sc.nextInt();
                sum+=a[i];
            }
            int k=0;
          
            int l=-1;
            for(int i=0;i<n;i++){
                
                sum-=a[i];
                if(k==sum){
                    l=i;
                    
                    break;
                }
                k+=a[i];
            }
            if(l==-1){
                System.out.println("-1");
            }else System.out.println(l+1);
        }
    }    
}
