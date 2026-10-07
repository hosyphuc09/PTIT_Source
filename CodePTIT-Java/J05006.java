import java.util.ArrayList;
import java.util.Scanner;

class NhanVien{
    private String MaNV,hoTen,gioiTinh,ngaySinh,diaChi,maThue,ngayKy;
    public NhanVien(String MaNV,String hoTen,String gioiTinh,String ngaySinh,String diaChi,String maThue,String ngayKy){
        this.MaNV=MaNV;
        this.hoTen=hoTen;
        this.gioiTinh=gioiTinh;
        this.ngaySinh=ngaySinh;
        this.diaChi=diaChi;
        this.maThue=maThue;
        this.ngayKy=ngayKy;
    }
    @Override 
    public String toString(){
        return MaNV+" "+hoTen+" "+gioiTinh+" "+ngaySinh+" "
        +diaChi+" "+maThue+" "+ngayKy;
    }
}
public class J05006{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
            int t=sc.nextInt();
            sc.nextLine();
            int dem=0;
            ArrayList<NhanVien> ds=new ArrayList<>();
            while(t-->0){
                dem++;
                String hoTen=sc.nextLine();
                String gioiTinh=sc.nextLine();
                String ngaySinh=sc.nextLine();
                String diaChi=sc.nextLine();
                String maThue=sc.nextLine();
                String ngayKy=sc.nextLine();
                String maNV=String.format("00%03d",dem);
                NhanVien nv=new NhanVien(maNV, hoTen, gioiTinh, ngaySinh, diaChi, maThue, ngayKy);
                ds.add(nv);
            }
            for(NhanVien x:ds){
                System.out.println(x);
            }
    }
}