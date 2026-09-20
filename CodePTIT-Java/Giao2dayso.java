import java.util.Arrays;
import java.util.HashSet;
import java.util.Scanner;
import java.util.TreeSet;

public class Giao2dayso {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n,m;
        n=sc.nextInt();
        m=sc.nextInt();
        int[] arr1=new int[n];
        int[] arr2=new int[m];
        for(int i=0;i<n;i++){
            arr1[i]=sc.nextInt();
        }
        for(int i=0;i<m;i++){
            arr2[i]=sc.nextInt();
        }
       
        HashSet<Integer> setA=new HashSet<>();
       TreeSet<Integer> result=new TreeSet<>();
        for(int x:arr1){
            setA.add(x);
        }
        for(int x:arr2){
            if(setA.contains(x)){
                result.add(x);
            }
        }

        for(int x:result){
            System.out.print(x+" ");
        }
        System.out.println();
    }
}
