import java.util.Scanner;

public class uocsochiahetcho2{
    public static void main(String[] arge){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0){
            t--;
            int n=sc.nextInt();
            int k=0;
            for(int i=2;i*i<=n;i++){
                if(n%i==0){
                    if(i%2==0) k++;
                    if(n/i!=i&&(n/i%2==0)) k++;
                }
            }
            if(n%2==0) k++;
            System.out.println(k);
        }
    }
}