import java.util.Scanner;

public class sapXepChon {
    public static void main(String[] arge){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int buoc=1;
        int k=-1;
        for(int i=0;i<n-1;i++){
            int min=arr[i];
            for(int j=i+1;j<n;j++){
                if(arr[j]<min){
                    min=arr[j];
                    k=j;
                }
            }
            int temp=arr[i];
            arr[i]=arr[k];
            arr[k]=temp;
            System.out.print("Buoc "+buoc+": ");
            for(int j=0;j<n;j++){
                System.out.print(arr[j]+" ");
            }
            System.out.println();
            buoc++;
        }
    }
}
