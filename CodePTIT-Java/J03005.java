import java.util.Scanner;

public class J03005{
    static String check(String s){
        s=s.substring(0,1).toUpperCase()
          + s.substring(1).toLowerCase();
        return  s;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();
        while(t-->0){
            String s=sc.nextLine();
            String[] a=s.trim().split("\\s+");
            for(int i=1;i<a.length;i++){
                if(i==a.length-1){
                    System.out.print(check(a[i]+","+" "));
                }else{
                System.out.print(check(a[i])+" ");
            }}
            System.out.println(a[0].toUpperCase());
        }
    }
}