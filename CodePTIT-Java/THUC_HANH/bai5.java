import java.util.Scanner;

class NguoiCong {
    private String ma;
    private String hoVaten;
    private int namSinh;
    private double hsl;
    private String dienThoai;

    private static int sma = 1;

    public NguoiCong() {
        ma = String.format("E%03d", sma++);
    }

    public void input(Scanner in) {
        hoVaten = in.nextLine();
        namSinh = Integer.parseInt(in.nextLine());
        hsl = Double.parseDouble(in.nextLine());
        dienThoai = in.nextLine();
    }

    private String getMa() {
        return ma;
    }

    private int getTuoi() {
        return 2026 - namSinh;
    }

    public String toString() {
        return getMa() + " " + hoVaten + " " + getTuoi()
                + " " + dienThoai + " " + (hsl * 10000);
    }
}

class QLNC {
    private NguoiCong[] a;

    public QLNC(NguoiCong[] a) {
        this.a = a;
    }

    public void out() {
        for (NguoiCong x : a) {
            System.out.println(x.toString());
        }
    }
}

public class bai5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = Integer.parseInt(sc.nextLine());

        NguoiCong[] ds = new NguoiCong[n];

        for (int i = 0; i < n; i++) {
            ds[i] = new NguoiCong();
            ds[i].input(sc);
        }

        QLNC ql = new QLNC(ds);
        ql.out();
    }
}