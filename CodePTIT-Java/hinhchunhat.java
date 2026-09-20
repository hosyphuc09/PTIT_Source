import java.util.Scanner;

public class hinhchunhat {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n,m;
        
        
            n=sc.nextInt();
        m=sc.nextInt();
            if(n>0&&m>0){
                 long cvi=(n+m)*2;
                 long dt=n*m;
                System.out.println(cvi+" "+dt);
            }else{
                System.out.println("0");
            }
        
    }
}
