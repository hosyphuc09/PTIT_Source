import java.util.Scanner;

public class J02037 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();
        while(t-->0){
            String s=sc.nextLine();
            String[] a=s.split(" ");
            int number=a.length;
            if(number%2==0){
                int chan=0;
                int le=0;
                for( int i=0;i<a.length;i++){
                    int k=Integer.parseInt(a[i]);
                    if(k%2==0) chan++;
                    else le++;
                }
                if(chan>le) System.out.println("YES");
                else System.out.println("NO");
            }else{
                int chan=0;
                int le=0;
                for(int i=0;i<a.length;i++){
                    int k=Integer.parseInt(a[i]);
                    if(k%2==1) le++;
                    else chan++;

                }
                if(le>chan) System.out.println("YES");
                else System.out.println("NO");
            }
        }
    }
}
