import java.util.Scanner;
import java.util.HashMap;
import java.util.LinkedHashMap;
public class Demsolanxh {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        int k=0;
        while(t-->0){
            k++;
            System.out.println("Test "+k+":");
            int n=sc.nextInt();
            LinkedHashMap<Integer,Integer> map=new LinkedHashMap<>();
            int[] arr=new int[n];
            for(int i=0;i<n;i++){
                arr[i]=sc.nextInt();
            }
            for(int x:arr){
                map.put(x,map.getOrDefault(x,0 )+1);
            }
            for(int x:map.keySet()){
                System.out.println(x+" xuat hien "+map.get(x)+" lan");
            }
        }
    }
}
