import java.util.Scanner;
import java.util.TreeSet;

public class Hop2dayso {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n,m;
        n=sc.nextInt();
        m=sc.nextInt();
        int[] arr1=new int[n];
        int[] arr2=new int[m];
        TreeSet<Integer> setA=new TreeSet<>();
        for(int i=0;i<n;i++){
            arr1[i]=sc.nextInt();
            setA.add(arr1[i]);
        }
        for(int i=0;i<m;i++){
            arr2[i]=sc.nextInt();
            setA.add(arr2[i]);
        }
        for(int x:setA){
            System.out.print(x+" ");
        }
        System.out.println();
    }
}
