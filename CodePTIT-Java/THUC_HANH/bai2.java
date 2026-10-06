import java.util.Scanner;

class NhanVien {
    private String hoTen;
    private String chucVu;
    private int soNgay;
    private long luongcb;

    // Constructor mặc định
    public NhanVien() {
    }

    // Phương thức nhập dữ liệu
    public void input(Scanner in) {
        this.hoTen = in.nextLine().trim();
        this.luongcb = Long.parseLong(in.nextLine().trim());
        this.soNgay = Integer.parseInt(in.nextLine().trim());
        this.chucVu = in.nextLine().trim();
    }

    // Phương thức chuẩn hóa họ tên
    private String chuanHoa(String hoTen) {
        if (hoTen == null || hoTen.trim().isEmpty()) {
            return "";
        }
        String[] words = hoTen.trim().split("\\s+");
        StringBuilder sb = new StringBuilder();
        for (String word : words) {
            if (!word.isEmpty()) {
                sb.append(Character.toUpperCase(word.charAt(0)))
                  .append(word.substring(1).toLowerCase())
                  .append(" ");
            }
        }
        return sb.toString().trim();
    }

    // Phương thức tính phụ cấp dựa trên chức vụ
    public double getPhuCap(String chucVu) {
        if (chucVu == null) return 0.0;
        switch (chucVu.toUpperCase()) {
            case "GD":
                return 250000.0;
            case "PGD":
                return 200000.0;
            case "TP":
                return 180000.0;
            case "NV":
                return 150000.0;
            default:
                return 0.0;
        }
    }

    // Phương thức tính thưởng
    private double getThuong() {
        double luongThang = (double) this.luongcb * this.soNgay;
        if (this.soNgay >= 25) {
            return luongThang * 0.20;
        } else if (this.soNgay >= 22) {
            return luongThang * 0.10;
        } else {
            return 0.0;
        }
    }

    // Phương thức tính tổng thu nhập
    public double getThuNhap(int soNgay) {
        double luongThang = (double) this.luongcb * this.soNgay;
        double phuCap = getPhuCap(this.chucVu);
        double thuong = getThuong();
        return luongThang + phuCap + thuong;
    }

    // Định dạng dữ liệu xuất ra dạng String
    @Override
    public String toString() {
        String tenChuanHoa = chuanHoa(this.hoTen);
        double luongThang = (double) this.luongcb * this.soNgay;
        double phuCap = getPhuCap(this.chucVu);
        double thuNhap = getThuNhap(this.soNgay);

        return String.format("%s %.1f %.1f %.1f", tenChuanHoa, luongThang, phuCap, thuNhap);
    }
}

public class bai2 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        NhanVien nv = new NhanVien();
        nv.input(in);
        System.out.println(nv);
    }
}