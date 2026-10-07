import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;
import java.util.Comparator;

class NhanVien{
    private String maNV,hoTen,gioiTinh,ngaySinh,diaChi,maThue,ngayKy;
    public NhanVien(String maNV,String hoTen,String gioiTinh,String ngaySinh,String diaChi,String maThue,String ngayKy){
        this.maNV=maNV;
        this.hoTen=hoTen;
        this.gioiTinh=gioiTinh;
        this.diaChi=diaChi;
        this.maThue=maThue;
        this.ngayKy=ngayKy;
        this.ngaySinh=ngaySinh;
    }
    public String getngaySinh(){
        return ngaySinh;
    }
    @Override 
    public String toString(){
        return maNV+" "+hoTen+" "+gioiTinh+" "+ngaySinh+" "
        +diaChi+" "+maThue+" "+ngayKy;
    }
}
public class J05007{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();
        ArrayList<NhanVien> ds=new ArrayList<>();
        int dem=0;
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
        Collections.sort(ds,new Comparator<NhanVien>(){
            @Override 
            public int compare(NhanVien a,NhanVien b){
                String[] x=a.getngaySinh().split("/");
                String[] y=b.getngaySinh().split("/");
                String dateA=x[2]+x[1]+x[0];
                String dateB=y[2]+y[1]+y[0];
                return dateA.compareTo(dateB);
            }
        });
        for(NhanVien x:ds){
            System.out.println(x);
        }
    }
}