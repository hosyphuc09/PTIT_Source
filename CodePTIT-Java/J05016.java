
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;
import java.time.temporal.ChronoUnit;

class KhachSan{
    private String ten,soPhong,ma;
    private int tienPhat;
    private long soNgay;
    public KhachSan(String ma,String ten,String soPhong,long soNgay, int tienPhat){
        this.ma=ma;
        this.ten=ten;
        this.soPhong=soPhong;
        this.soNgay=soNgay;
        this.tienPhat=tienPhat;
    }
    public long tongTien(){
        int x=soPhong.charAt(0)-'0';
        int giaTang=0;
        if(x==1) giaTang=25;
        else if(x==2) giaTang=34;
        else if(x==3) giaTang=50;
        else if(x==4) giaTang=80;
        long tong=giaTang*soNgay+tienPhat;
        return tong;
    }
    @Override 
    public String toString(){
        return ma+" "+ten+" "+soPhong+" "+soNgay
        +" "+tongTien();
    }
}
public class J05016{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine().trim());
        ArrayList<KhachSan> ds = new ArrayList<>();
        
        // Dùng "d/M/yyyy" để parse được cả "1/1/2020" và "01/01/2020"
        DateTimeFormatter fmt = DateTimeFormatter.ofPattern("d/M/yyyy");
        
        for (int dem = 1; dem <= t; dem++) {
            String ma = String.format("KH%02d", dem);
            String ten = sc.nextLine().trim();
            String soPhong = sc.nextLine().trim();
            String ngayDen = sc.nextLine().trim();
            String ngayDi = sc.nextLine().trim();
            int tienPhat = Integer.parseInt(sc.nextLine().trim());
            
            LocalDate ngayDen1 = LocalDate.parse(ngayDen, fmt);
            LocalDate ngayDi1 = LocalDate.parse(ngayDi, fmt);
            
            long soNgay = ChronoUnit.DAYS.between(ngayDen1, ngayDi1) + 1;
            
            ds.add(new KhachSan(ma, ten, soPhong, soNgay, tienPhat));
        }
        Collections.sort(ds,new Comparator<KhachSan>(){
            @Override 
            public int compare(KhachSan a,KhachSan b){
                return Long.compare(b.tongTien(), a.tongTien());
            }
        });
        for(KhachSan x:ds){
            System.out.println(x);
        }
    }
}