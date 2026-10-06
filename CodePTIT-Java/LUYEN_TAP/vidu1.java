import java.util.*;

class ThiSinh {
    private String maTS;
    private String hoTen;
    private String danToc;
    private double toan;
    private double ly;
    private double hoa;
    private int giai;

    public ThiSinh(String maTS, String hoTen, String danToc,
                   double toan, double ly, double hoa, int giai) {
        this.maTS = maTS;
        this.hoTen = hoTen;
        this.danToc = danToc;
        this.toan = toan;
        this.ly = ly;
        this.hoa = hoa;
        this.giai = giai;
    }

    
    public double diemUuTien() {
        double diem = 0;

        
        String khuVuc = maTS.substring(0, 3);

        if (khuVuc.equals("KV2")) {
            diem += 1;
        } else if (khuVuc.equals("KV3")) {
            diem += 2;
        }

        // Dân tộc
        if (!danToc.equals("Kinh")) {
            diem += 1;
        }

        // Giải quốc gia
        if (giai == 1) {
            diem += 1.5;
        } else if (giai == 2) {
            diem += 1;
        } else if (giai == 3) {
            diem += 0.5;
        }

        return diem;
    }

    // Tổng điểm 3 môn, không tính ưu tiên
    public double tongDiem() {
        return toan + ly + hoa;
    }

    public String getMaTS() {
        return maTS;
    }

    public String getHoTen() {
        return hoTen;
    }
}

public class vidu1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = Integer.parseInt(sc.nextLine());

        ArrayList<ThiSinh> ds = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String maTS = sc.nextLine();
            String hoTen = sc.nextLine();
            String danToc = sc.nextLine();
            double toan = Double.parseDouble(sc.nextLine());
            double ly = Double.parseDouble(sc.nextLine());
            double hoa = Double.parseDouble(sc.nextLine());
            int giai = Integer.parseInt(sc.nextLine());

            ds.add(new ThiSinh(maTS, hoTen, danToc,
                               toan, ly, hoa, giai));
        }

        double A = Double.parseDouble(sc.nextLine());

        boolean timThay = false;

        for (ThiSinh ts : ds) {

            
            if (ts.diemUuTien() == 0 && ts.tongDiem() >= A) {

                timThay = true;

                System.out.println(ts.getMaTS());
                System.out.println(ts.getHoTen());
                System.out.printf("%.1f%n", ts.diemUuTien());
                System.out.printf("%.1f%n", ts.tongDiem());

                
                if (ts.tongDiem() + ts.diemUuTien() >= 26.8) {
                    System.out.println("TRUNG TUYEN");
                } else {
                    System.out.println("TRUOT");
                }
            }
        }

        if (!timThay) {
            System.out.println("khong co");
        }
    }
}