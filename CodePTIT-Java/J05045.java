import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class ThuNhap {
    private String ma, ten, chucVu;
    private int luong, ngayCong;

    public ThuNhap(String ma, String ten, String chucVu, int luong, int ngayCong) {
        this.ma = ma;
        this.ten = ten;
        this.chucVu = chucVu;
        this.luong = luong;
        this.ngayCong = ngayCong;
    }

    public int PhuCap() {
        if (chucVu.equals("GD")) return 500;
        if (chucVu.equals("PGD")) return 400;
        if (chucVu.equals("TP")) return 300;
        if (chucVu.equals("KT")) return 250;
        return 100;
    }

    public long Luong() {
        return 1L * luong * ngayCong;
    }

    public long Thunhap() {
        return Luong() + PhuCap();
    }

    public long TamUng() {
        double tong = Thunhap() * 2.0 / 3;

        if (tong < 25000) {
            return Math.round(tong / 1000.0) * 1000;
        }
        return 25000;
    }

    public long Conlai() {
        return Thunhap() - TamUng();
    }

    public String getMa() {
        return ma;
    }

    @Override
    public String toString() {
        return ma + " " + ten + " " + PhuCap() + " " +
               Luong() + " " + TamUng() + " " + Conlai();
    }
}

public class J05045 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = Integer.parseInt(sc.nextLine().trim());
        int dem = 0;

        ArrayList<ThuNhap> ds = new ArrayList<>();

        while (t-- > 0) {
            dem++;
            String ma = String.format("NV%02d", dem);
            String ten = sc.nextLine().trim();
            String chucVu = sc.nextLine().trim();
            int luong = Integer.parseInt(sc.nextLine().trim());
            int ngayCong = Integer.parseInt(sc.nextLine().trim());

            ds.add(new ThuNhap(ma, ten, chucVu, luong, ngayCong));
        }

        Collections.sort(ds, new Comparator<ThuNhap>() {
            @Override
            public int compare(ThuNhap a, ThuNhap b) {
                if (a.Thunhap() != b.Thunhap()) {
                    return Long.compare(b.Thunhap(), a.Thunhap());
                }
                return a.getMa().compareTo(b.getMa());
            }
        });

        for (ThuNhap x : ds) {
            System.out.println(x);
        }
    }
}