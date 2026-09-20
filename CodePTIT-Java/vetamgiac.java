import java.util.Scanner;

public class vetamgiac{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("moi nhap do dai canh: ");
        int n=sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                System.out.print("*");
            }
            System.out.println();
        }
      System.out.print("moi nhap canh hinh vuong: ");
      int m=sc.nextInt();
      for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            if(i==1||i==m||j==1||j==m){
                System.out.print("*");
            }else{
                System.out.print(" ");
            }
        }
        System.out.println();
      }
    }
}