import java.util.Scanner;

public class Mangdoixung {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int[] arr=new int[n];
            for(int i=0;i<n;i++){
                arr[i]=sc.nextInt();
            }
            boolean f=false;
            for(int i=0;i<n/2;i++){
                if(arr[i]!=arr[n-1-i]){
                    f=true;
                    break;
                }
            }
            if(f){
                System.out.println("NO");
            }else{
                System.out.println("YES");
            }
        }
    }
}
