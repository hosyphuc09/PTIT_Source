import java.util.Scanner;

public class ktrasongto {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        while(true){
        System.out.print("moi nhap so nguyen: ");
        int a=sc.nextInt();
        while(a<0){
            System.out.println("moi nhap lai so nguyen a: ");
            a=sc.nextInt();
        }
        int dem=0;
        for(int i=1;i*i<=a;i++){
            if(a%i==0) dem++;
        }
        if(dem==1){
            System.out.println(a+" la so nguyen to");
            System.out.println("ban muon thoat ko, nhap Y de thoat: ");
            String traloi=new Scanner(System.in).nextLine();
            if(traloi.equals("Y")||traloi.equals("y")){
              break;
            }
        }else{
            System.out.println(a+" ko phai la so ngto");
            System.out.println("ban muon thoat ko, nhap Y de thoat: ");
            String traloi=new Scanner(System.in).nextLine();
            if(traloi.equals("Y")||traloi.equals("y")){
              break;
            }
        }
    }}
}
