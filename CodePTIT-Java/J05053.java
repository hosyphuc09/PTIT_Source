import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class DonHang{
    private String ten,ma;
    private int donGia,soLuong;
    public DonHang(String ten,String ma,int donGia,int soLuong){
        this.ten=ten;
        this.ma=ma;
        this.donGia=donGia;
        this.soLuong=soLuong;
    }
    public long GiamGia(){
        int x=ma.charAt(4)-'0';
        if(x==1){
            return Math.round(donGia*soLuong*0.5);
        }else if(x==2){
            return Math.round(donGia*soLuong*0.3);
        }
        return 0;
    }
    public String stt(){
        String s=""+ma.charAt(1)+ma.charAt(2)+ma.charAt(3);
        return s;
    }
    public int TT(){
        return Integer.parseInt(stt());
    }
    public long ThanhTien(){
        return soLuong*donGia-GiamGia();
    }
    @Override 
    public String toString(){
        return ten+" "+ma+" "+stt()+" "+GiamGia()+" "+ThanhTien();
    }
}
public class J05053{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<DonHang> ds=new ArrayList<>();
        while(t-->0){
            String ten=sc.nextLine().trim();
            String ma=sc.nextLine().trim();
            int donGia=Integer.parseInt(sc.nextLine().trim());
            int soLuong=Integer.parseInt(sc.nextLine().trim());
            DonHang dh=new DonHang(ten, ma, donGia, soLuong);
            ds.add(dh);
        }
        Collections.sort(ds,new Comparator<DonHang>() {
            @Override 
            public int compare(DonHang a,DonHang b){
                return Integer.compare(a.TT(),b.TT());
            }
        });
        for(DonHang x:ds){
            System.out.println(x);
        }
    }
}