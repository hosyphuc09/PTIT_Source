import java.util.Scanner;

class GiangVien {
    private String ma;
    private String hoTen;
    private int tongGioDay;
    private double heSoLuong;
    private double luongLinh;
    private static int sMa = 1;

    public GiangVien() {
    }

    public void input(Scanner in) {
        this.hoTen = in.nextLine();
        this.tongGioDay = Integer.parseInt(in.nextLine().trim());
        this.heSoLuong = Double.parseDouble(in.nextLine().trim());

        
        this.ma = String.format("PM%04d", sMa++);
        
        
        this.luongLinh = getLuongLinh();
    }

    public double getLuongLinh() {
       
        return this.tongGioDay * 240 * this.heSoLuong;
    }

    @Override
    public String toString() {
        
        return ma + " " + hoTen + " " + tongGioDay + " " + heSoLuong;
    }
}
public class bai4{
    public static void main(String[] args) {
        Scanner in =new Scanner(System.in);
        GiangVien gv=new GiangVien();
        gv.input(in);
        System.out.println(gv);
        System.out.println(gv.getLuongLinh());
        gv.input(in);
        System.out.println(gv);
        System.out.println(gv.getLuongLinh());
    }
}