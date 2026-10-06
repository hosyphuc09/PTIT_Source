import java.util.Scanner;
class SanPham {
    private String ma;
    private String ten;
    private int soLuong;
    private String nhaSX;
    private double gia;

    private static int sMa = 1;

    public SanPham(String ten, int soLuong, String nhaSX, double gia) {
        this.ten = ten;
        this.soLuong = soLuong;
        this.nhaSX = nhaSX;
        this.gia = gia;
    }

    public String getMa() {
        return nhaSX.toUpperCase() + "-" + String.format("%03d", sMa++);
    }

    public double getThanhTien() {
        double tien = soLuong * gia;

        if (soLuong >= 20) {
            tien = tien * 0.9;
        }

        return tien;
    }

    @Override
    public String toString() {
        return getMa() + " " + ten + " " + soLuong + " "
                + String.format("%.1f", gia) + " "
                + String.format("%.1f", getThanhTien());
    }
}

public class bai1 {

    public static void main(String[] args) {
          Scanner sc=new Scanner(System.in);
          int n=Integer.parseInt(sc.nextLine());
          SanPham s;
          for(int i=0;i<n;i++){
              s=new SanPham(sc.nextLine(),
                      Integer.parseInt(sc.nextLine()),
                      sc.nextLine(),Double.parseDouble(sc.nextLine()));
              System.out.println(s.toString());
          }                 
    }
}