
import java.io.*;
import java.util.*;

class NhanVien {
    String ma, ten, luong;
    boolean gioiTinh;

    public NhanVien(String ma, String ten,
                    boolean gioiTinh, String luong) {
        this.ma = ma;
        this.ten = ten;
        this.gioiTinh = gioiTinh;
        this.luong = luong;
    }

    public String getTen() {
        String[] a = ten.trim().split("\\s+");
        return a[a.length - 1].toLowerCase(Locale.ROOT);
    }

    @Override
    public String toString() {
        return ma + " " + ten + " "
                + (gioiTinh ? "nam" : "nu")
                + " " + luong;
    }
}

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(new File("nhanvien.dat"));
        ArrayList<NhanVien> ds = new ArrayList<>();

        while (sc.hasNextLine()) {
            String s = sc.nextLine().trim();
            if (s.isEmpty()) continue;

            String[] a = s.split("/");

            ds.add(new NhanVien(
                a[0].trim(),
                a[1].trim(),
                Boolean.parseBoolean(a[2].trim()),
                a[3].trim()
            ));
        }

        ds.sort((x, y) ->
                x.getTen().compareTo(y.getTen()));

        for (NhanVien x : ds) {
            System.out.println(x);
        }

        sc.close();
    }
}
