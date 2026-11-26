
import java.io.File;
import java.util.*;

class MonHoc {
    private String ma, ten;
    private int tinChi, kyHoc;

    public MonHoc(String ma, String ten, int tinChi, int kyHoc) {
        this.ma = ma;
        this.ten = ten;
        this.tinChi = tinChi;
        this.kyHoc = kyHoc;
    }

    public String getTen() {
        return ten;
    }

    public int getKyHoc() {
        return kyHoc;
    }

    @Override
    public String toString() {
        return ma + " " + ten + " " + tinChi + " " + kyHoc;
    }
}

public class bai3 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(new File("monhoc.dat"));
        ArrayList<MonHoc> ds = new ArrayList<>();

        while (sc.hasNextLine()) {
            String s = sc.nextLine().trim();
            if (s.isEmpty()) continue;

            String[] a = s.split(",");

            ds.add(new MonHoc(
                a[0].trim(),
                a[1].trim(),
                Integer.parseInt(a[2].trim()),
                Integer.parseInt(a[3].trim())
            ));
        }

        ds.sort((x, y) -> {
            if (x.getKyHoc() != y.getKyHoc()) {
                return Integer.compare(x.getKyHoc(), y.getKyHoc());
            }
            return x.getTen().compareToIgnoreCase(y.getTen());
        });

        for (MonHoc x : ds) {
            System.out.println(x);
        }

        sc.close();
    }
}
