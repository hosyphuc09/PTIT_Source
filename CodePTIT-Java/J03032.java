import java.util.Scanner;

public class J03032{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();
        while(t-->0){
            String s=sc.nextLine();
            String[] a=s.split(" ");
            for(int i=0;i<a.length;i++){
                StringBuilder text=new StringBuilder(a[i]);
                System.out.print(text.reverse()+" ");
            }
            System.out.println();
        }
    }
}