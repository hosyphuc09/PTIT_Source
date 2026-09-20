import java.util.ArrayList;
import java.util.Random;
import java.util.Scanner;

public class BT1_list {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        ArrayList<Integer> lst=new ArrayList<>(n);
       for(int i=0;i<n;i++){
        int a=sc.nextInt();
        lst.add(a);
       }
       ArrayList<Integer> lst1=new ArrayList<>(n);
       Random rd=new Random();
       for(int i=0;i<n;i++){
        int b=rd.nextInt(1,100);
        lst1.add(b);
       }
       System.out.println(lst);
       System.out.println(lst1);
    }
}
