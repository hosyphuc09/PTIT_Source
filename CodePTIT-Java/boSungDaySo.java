import java.util.ArrayList;
import java.util.Scanner;

public class boSungDaySo {
    public static void main(String[] arge){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] a=new int[n];
        ArrayList<Integer> arr=new ArrayList<>();
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
            arr.add(a[i]);
        }
        int dem=0;
        for(int i=1;i<a[n-1];i++){
           if(!arr.contains(i)){
            System.out.println(i);
            dem++;
           }
        }
        if(dem==0){
            System.out.println("Excellent!");
        }
    }
}
