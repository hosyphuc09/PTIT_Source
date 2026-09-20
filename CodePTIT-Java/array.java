import java.util.Arrays;
import java.util.Scanner;

public class array {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        //khai bao mang
        String[] s;
        //tao mang
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        for(int m:arr){
            System.out.print(m+" ");
        }
        System.out.println();
        // sap xep mang
        Arrays.sort(arr);
        for(int m:arr){
            System.out.print(m+" ");
        }
        System.out.println();
        //dao mang
        for(int i=0, j=arr.length-1;i<j;i++,j--){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        for(int m:arr){
            System.out.print(m+" ");
        }
        System.out.println();
    }
}
