import java.util.ArrayList;
import java.util.Random;
import java.util.Scanner;

public class Bt2_list {

    public static void main(String[] arge){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        Random rd=new Random();
        ArrayList<Integer> lst=new ArrayList<>(n);
        for(int i=0;i<n;i++){
            int a=rd.nextInt(1,100);
            lst.add(a);
        }
        System.out.println(lst);
        for(int c:lst){
            if(c<80) System.out.print(c+" ");
        }
        System.out.println();
        for(int i=0;i<n;i++){
            if(lst.get(i)<80){
                System.out.println("M["+i+"]="+lst.get(i));
            }
        }
    }
}