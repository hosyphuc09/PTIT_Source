import java.util.Scanner;

class SanPham {
    protected String ma;
    protected String ten;
    protected double gia;
    protected static int sMa = 1;

    public SanPham() {
    }
}

class SanPhamNhua extends SanPham {
    private String loaiNhua;
    private boolean taiChe;

    public SanPhamNhua() {
        super();
    }

    public void nhap(Scanner in) {
        this.ten = in.nextLine();
        this.loaiNhua = in.nextLine();
        this.taiChe = Boolean.parseBoolean(in.nextLine().trim());
        this.gia = Double.parseDouble(in.nextLine().trim());

        
        this.ma = String.format("N%02d", sMa++);
    }

    public double getGia() {
      
        if (this.taiChe) {
            return this.gia * 0.85;
        }
        return this.gia;
    }

    @Override
    public String toString() {
      
        String strTaiChe = this.taiChe ? "tai che" : "khong";
        return ma + " " + ten + " " + loaiNhua + " " + strTaiChe + " " + Math.round(getGia());
    }
}

class SanPhamGo extends SanPham {
    private String loaiGo;
    private String xuatXu;

    public SanPhamGo() {
        super();
    }

    public void nhap(Scanner in) {
        this.ten = in.nextLine();
        this.loaiGo = in.nextLine();
        this.xuatXu = in.nextLine();
        this.gia = Double.parseDouble(in.nextLine().trim());

       
        this.ma = String.format("G%02d", sMa++);
    }

    public double getGia() {
       
        if (!"VN".equalsIgnoreCase(this.xuatXu.trim())) {
            return this.gia * 1.10;
        }
        return this.gia;
    }

    @Override
    public String toString() {
        
        return ma + " " + ten + " " + loaiGo + " " + xuatXu + " " + Math.round(getGia());
    }
}
public class bai2{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        SanPham sp=new SanPhamNhua();
        ((SanPhamNhua)sp).nhap(in);
        System.out.println(sp);
        sp=new SanPhamGo();
        ((SanPhamGo)sp).nhap(in);
        System.out.println(sp);
    }
}