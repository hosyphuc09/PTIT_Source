import java.util.*;

class ThiSinh {
    private String ma;
    private String hoTen;
    private String danToc;
    private double toan;
    private double ly;
    private double hoa;
    private int giaiQuocGia;

    public ThiSinh(String ma, String hoTen, String danToc, double toan, double ly, double hoa, int giaiQuocGia) {
        this.ma = ma;
        this.hoTen = hoTen;
        this.danToc = danToc;
        this.toan = toan;
        this.ly = ly;
        this.hoa = hoa;
        this.giaiQuocGia = giaiQuocGia;
    }

    
    public double getDiemUuTien() {
        double utKhuVuc = 0;
        String kv = ma.substring(0, 3);
        if (kv.equals("KV1")) {
            utKhuVuc = 0;
        } else if (kv.equals("KV2")) {
            utKhuVuc = 1.0;
        } else if (kv.equals("KV3")) {
            utKhuVuc = 2.0;
        }

        double utDanToc = 0;
        if (!danToc.trim().equalsIgnoreCase("kinh")) {
            utDanToc = 1.0;
        }

        double utGiai = 0;
        if (giaiQuocGia == 1) {
            utGiai = 1.5;
        } else if (giaiQuocGia == 2) {
            utGiai = 1.0;
        } else if (giaiQuocGia == 3) {
            utGiai = 0.5;
        }

        return utKhuVuc + utDanToc + utGiai;
    }

    
    public double getTongDiemKhongUuTien() {
        return toan + ly + hoa;
    }

    
    public double getTongDiemXetTuyen() {
        return getTongDiemKhongUuTien() + getDiemUuTien();
    }

    
    private String formatNumber(double val) {
        if (val == (long) val) {
            return String.format("%d", (long) val);
        }
        return String.format(Locale.US, "%.1f", val);
    }

    public String getTrangThai() {
        if (getTongDiemXetTuyen() >= 26.8) {
            return "TRUNG TUYEN";
        }
        return "TRUOT";
    }

    @Override
    public String toString() {
        return ma + " " + hoTen + " " + formatNumber(getDiemUuTien()) + " " + formatNumber(getTongDiemKhongUuTien()) + " " + getTrangThai();
    }
}

public class bai5 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        if (!in.hasNextInt()) return;
        
        int n = Integer.parseInt(in.nextLine().trim());
        List<ThiSinh> list = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String ma = in.nextLine().trim();
            String hoTen = in.nextLine().trim();
            String danToc = in.nextLine().trim();
            double toan = Double.parseDouble(in.nextLine().trim());
            double ly = Double.parseDouble(in.nextLine().trim());
            double hoa = Double.parseDouble(in.nextLine().trim());
            int giaiQuocGia = Integer.parseInt(in.nextLine().trim());

            list.add(new ThiSinh(ma, hoTen, danToc, toan, ly, hoa, giaiQuocGia));
        }

        double A = Double.parseDouble(in.nextLine().trim());

        boolean found = false;
        for (ThiSinh ts : list) {
            
            if (ts.getDiemUuTien() == 0 && ts.getTongDiemKhongUuTien() >= A) {
                System.out.println(ts);
                found = true;
            }
        }

        if (!found) {
            System.out.println("khong co");
        }
    }
}