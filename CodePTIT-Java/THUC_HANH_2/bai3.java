import java.util.Scanner;

class NhanVien {
    private String ma;
    private String hoDem;
    private String ten;
    private boolean gioiTinh;
    private int namSinh;
    private static int sMa = 1;

    public NhanVien() {
    }

    public void input(Scanner in) {
        this.hoDem = in.nextLine();
        this.ten = in.nextLine();
        this.gioiTinh = Boolean.parseBoolean(in.nextLine().trim());
        this.namSinh = Integer.parseInt(in.nextLine().trim());

        
        this.ma = String.format("NV%04d", sMa++);
    }

    public String getHoTen() {
        return hoDem + " " + ten;
    }

    @Override
    public String toString() {
        String strGioiTinh = gioiTinh ? "nam" : "nu";
        return ma + " " + getHoTen() + " " + strGioiTinh + " " + namSinh;
    }
}
public class bai3{
    public static void main(String[] args){
        Scanner in =new Scanner(System.in);
        NhanVien nv=new NhanVien();
        nv.input(in);
        System.out.println(nv.getHoTen());
        System.out.println(nv);
        nv.input(in);
        System.out.println(nv.getHoTen());
        System.out.println(nv);
    }
}