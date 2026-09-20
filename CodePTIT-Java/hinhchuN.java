import java.util.Scanner;

public class hinhchuN {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("moi nhap so nguyen: ");
        int n=sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(j==1||j==n||j==i){
                    System.out.print(i+""+j+"\t");
                }else{
                    System.out.print(" "+"\t");
                }
            }
            System.out.println();
        }

    }
}
