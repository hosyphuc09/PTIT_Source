import java.util.Scanner;
import java.util.concurrent.SynchronousQueue;

public class sapXepDoichoTT {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int buoc=1;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
            System.out.print("Buoc "+buoc+": ");
            for(int j=0;j<n;j++){
                System.out.print(arr[j]+" ");
            }
            System.out.println();
            buoc++;
        }
    }
}
