import java.util.ArrayList;
import java.util.Scanner;
import java.util.Collections;
class SanPham{
    private String ten,ma;
    private long gia1,gia2;
    public SanPham(String ma,String ten,long gia1,long gia2){
        this.ma=ma;
        this.ten=ten;
        this.gia1=gia1;
        this.gia2=gia2;
    }
    public String getTen(){
        return ten;
    }
    public long LoaiGia(int loai){
        return loai==1 ? gia1:gia2;
    }
    public String getMa(){
        return ma;
    }
}
class HoaDon{
    private String ma;
    private long soLuong;
    SanPham sp;
    public HoaDon(String ma,long soLuong,SanPham sp){
        this.ma=ma;
        this.soLuong=soLuong;
        this.sp=sp;
    }
    public long ThanhTien(){
        int loai=ma.charAt(2)-'0';
        return soLuong*sp.LoaiGia(loai);
    }
    public long GiamGia(){
        if(soLuong>=150){
            return ThanhTien()*50/100;
        }else if(soLuong>=100){
            return ThanhTien()*30/100;
        }else if(soLuong>=50){
            return ThanhTien()*15/100;
        }else{
            return 0;
        }
    }
    public long PhaiTra(){
        return ThanhTien()-GiamGia();
    }
    @Override 
    public String toString(){
        return ma+" "+sp.getTen()+" "+GiamGia()+" "+(ThanhTien()-GiamGia());
    }
}
public class J06002{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<SanPham> dsSP=new ArrayList<>();
        ArrayList<HoaDon> dsHD=new ArrayList<>();
        int dem=0;
        while(t-->0){
            String maSP=sc.nextLine().trim();
            String ten=sc.nextLine().trim();
            long gia1=Long.parseLong(sc.nextLine().trim());
            long gia2=Long.parseLong(sc.nextLine().trim());
            SanPham sp=new SanPham(maSP, ten, gia1, gia2);
            dsSP.add(sp);
        }
        int k=Integer.parseInt(sc.nextLine().trim());
        while(k-->0){
            dem++;
            String maHD=sc.next();
            long soLuong=sc.nextLong();
            sc.nextLine();
            String ma1=maHD+String.format("-%03d",dem);
            for(SanPham sp:dsSP){
                if(sp.getMa().equals(maHD.substring(0,2))){
                    HoaDon hd=new HoaDon(ma1, soLuong,sp);
                    dsHD.add(hd);
                    break;
                }
            }
        }
        Collections.sort(dsHD,(a,b)->Long.compare(b.PhaiTra(),a.PhaiTra()));
        for(HoaDon x:dsHD){
            System.out.println(x);
        }
    }
}