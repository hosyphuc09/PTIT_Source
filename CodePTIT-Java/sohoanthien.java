import java.util.Scanner;

public class sohoanthien {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        
        for(int i=1;i<=1000;i++){
            int tong=0;
            for(int j=1;j<=i/2;j++){
                if(i%j==0){
                    tong+=j;
                }
            }
            if(tong==i){
                System.out.println("so hoan thien la: "+i);
            }
        }
    }
}
