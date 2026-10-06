import java.util.Scanner;

class nhanVien{
    private String maNV;
    private String hoTen;
    private String gioiTinh;
    private String ngaySinh;
    private String diaChi;
    private String thue;
    private String hopDong;
    public nhanVien(String maNV,String hoTen,String gioiTinh,String ngaySinh,String diaChi,String thue,String hopDong){
        this.maNV=maNV;
        this.hoTen=hoTen;
        this.gioiTinh=gioiTinh;
        this.ngaySinh=ngaySinh;
        this.diaChi=diaChi;
        this.thue=thue;
        this.hopDong=hopDong;
    }
    public String getMaNV(){
        return maNV;
    }
    public String getHoTen(){
        return hoTen;
    }
    public String getNgaySinh(){
        return ngaySinh;
    }
    public String getDiaChi(){
        return diaChi;
    }
    public String getThue(){
        return thue;
    }
    public String getHopDong(){
        return hopDong;
    }
    public String getGioiTinh(){
        return  gioiTinh;
    }
}
public class J04007{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String maNV="00001";
        String hoTen=sc.nextLine();
        String gioiTinh=sc.next();
        String ngaySinh=sc.next();
        sc.nextLine();
        String diaChi=sc.nextLine();
        String thue=sc.nextLine();
        String hopDong=sc.next();
        String[] a=ngaySinh.split("/");
        ngaySinh=String.format("%02d/%02d/%s",Integer.parseInt(a[0]),Integer.parseInt(a[1]),a[2]);
        String[] b=hopDong.split("/");
        hopDong=String.format("%02d/%02d/%s",Integer.parseInt(b[0]),Integer.parseInt(b[1]),b[2]);
        
        nhanVien nv=new nhanVien(maNV,hoTen,gioiTinh,ngaySinh,diaChi,thue,hopDong);
        System.out.println(nv.getMaNV()+" "+nv.getHoTen()+" "+nv.getGioiTinh()+" "
                    +nv.getNgaySinh()+" "+nv.getDiaChi()+" "+nv.getThue()+" "+nv.getHopDong());
    }
}