import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

public class J03009 {
    public static void main(String[] arge){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();
        while(t-->0){
            String s1=sc.nextLine();
            String s2=sc.nextLine();
            String[] a=s1.split(" ");
            String[] b=s2.split(" ");
            TreeSet<String> tree=new TreeSet<>();
            for(int i=0;i<a.length;i++){
                boolean f=false;
                for(int j=0;j<b.length;j++){
                    if(a[i].equals(b[j])){
                        f=true;
                        break;
                    }
                }
                if(!f){
                    tree.add(a[i]);
                }
            }
            for(String x:tree){
                System.out.print(x+" ");
            }
            System.out.println();
        }
    }
}
