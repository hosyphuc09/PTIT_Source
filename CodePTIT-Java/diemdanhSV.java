import java.util.Scanner;

class diemDanh{
    static int soLuong=0;
    static int vangMat=0;
    static int coMat=0;
    String hoTen;
    diemDanh(String hoTen,boolean coMat){
        this.hoTen=hoTen;
        soLuong++;
        if(coMat){
            diemDanh.coMat++;
        }
        else{
            diemDanh.vangMat++;
        }
    }
}
public class diemdanhSV{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine());
        while(t-->0){
            System.out.println("moi nhap ten SV: ");
            String hoTen=sc.nextLine();
            System.out.println("1 la co mat, 0 la vang");
            int x=Integer.parseInt(sc.nextLine());
            boolean coMat=(x==1);
            new diemDanh(hoTen, coMat);
            
        }
        System.out.println("so sv:"+diemDanh.soLuong);
        System.out.println("so sv co mat:"+ diemDanh.coMat);
        System.out.println("so sv vang mat: "+diemDanh.vangMat);
    }
}
