import java.util.Scanner;

public class J01020 {
    static String check(String s){
        s=s.substring(0,1).toUpperCase()
          + s.substring(1).toLowerCase();
        return s;
    }
    public static void main(String[] agre){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();
        while(t-->0){
            String s=sc.nextLine();
            String[] a=s.trim().split("\\s+");
            for(int i=0;i<a.length;i++){
                System.out.print(check(a[i])+" ");
            }
            System.out.println();
        }
    }
}
