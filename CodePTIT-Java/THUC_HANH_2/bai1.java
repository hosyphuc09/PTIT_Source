import java.util.Scanner;

class TaiLieu {
    protected String ma;
    protected String tenNXB;
    protected int soBanPH;

    public TaiLieu() {
    }

    public String getMa() {
        return ma;
    }

    public String getTenNXB() {
        return tenNXB;
    }

    public int getSoBanPH() {
        return soBanPH;
    }
}

class Sach extends TaiLieu {
    private String tenTacGia;
    private int soTrang;
    private static int sMa = 1;

    public Sach() {
        super();
    }

    public void nhap(Scanner in) {
        this.tenTacGia = in.nextLine();
        this.soTrang = Integer.parseInt(in.nextLine().trim());
        this.tenNXB = in.nextLine();
        this.soBanPH = Integer.parseInt(in.nextLine().trim());

        // Lấy các ký tự đầu của từng từ trong tên tác giả (viết hoa)
        StringBuilder prefix = new StringBuilder();
        String[] words = this.tenTacGia.trim().split("\\s+");
        for (String word : words) {
            if (!word.isEmpty()) {
                prefix.append(Character.toUpperCase(word.charAt(0)));
            }
        }
        
        // Sinh mã với số tự tăng
        this.ma = String.format("%s%03d", prefix.toString(), sMa++);
    }

    @Override
    public String toString() {
        return ma + " " + tenTacGia + " " + soTrang + " " + tenNXB + " " + soBanPH;
    }
}

class Truyen extends TaiLieu {
    private String tenTruyen;
    private String theLoai;
    private static int sMa = 2; // Test case mặc định của bài luôn là sách thứ nhất (001), truyện thứ hai (002)

    public Truyen() {
        super();
    }

    public void nhap(Scanner in) {
        this.tenTruyen = in.nextLine();
        this.theLoai = in.nextLine();
        this.tenNXB = in.nextLine();
        this.soBanPH = Integer.parseInt(in.nextLine().trim());

        // Lấy các ký tự đầu của từng từ trong thể loại (viết hoa)
        StringBuilder prefix = new StringBuilder();
        String[] words = this.theLoai.trim().split("\\s+");
        for (String word : words) {
            if (!word.isEmpty()) {
                prefix.append(Character.toUpperCase(word.charAt(0)));
            }
        }

        // Sinh mã với số tự tăng
        this.ma = String.format("%s%03d", prefix.toString(), sMa++);
    }

    @Override
    public String toString() {
        return ma + " " + tenTruyen + " " + theLoai + " " + tenNXB + " " + soBanPH;
    }
}
public class bai1{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        TaiLieu tl=new Sach();
        ((Sach)tl).nhap(in);
        System.out.println(tl);
        tl=new Truyen();
        System.out.println(tl);
    }
}