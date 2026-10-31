import java.util.ArrayList;
import java.util.Scanner;

class SanPham{
    private String ma,ten;
    private long gia1,gia2;
    public SanPham(String ma,String ten,long gia1,long gia2){
        this.ma=ma;
        this.ten=ten;
        this.gia1=gia1;
        this.gia2=gia2;
    }
    public long getGia1(){
        return gia1;
    }
    public long getGia2(){
        return gia2;
    }
    public long getGia(int loai){
        return loai==1 ? gia1:gia2;
    }
    public String getma(){
        return ma;
    }
    public String getTen(){
        return ten;
    }
}
class HoaDon{
    private String ma;
    private long soLuong;
    private SanPham sp;
    public HoaDon(String ma,long soLuong,SanPham sp){
        this.ma=ma;
        this.soLuong=soLuong;
        this.sp=sp;
    }
    public long ThanhTien(){
        int loai=ma.charAt(2)-'0';
        return soLuong*sp.getGia(loai);
    }
    public long GiamGia(){
        if(soLuong>=150){
            return Math.round(ThanhTien()*0.5);
        }else if(soLuong>=100){
            return Math.round(ThanhTien()*0.3);
        }else if(soLuong>=50){
            return Math.round(ThanhTien()*0.15);
        }else{
            return 0;
        }
    }
    @Override 
    public String toString(){
        return ma+" "+sp.getTen()+" "+GiamGia()+" "+(ThanhTien()-GiamGia());
    }
}
public class J06001{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<HoaDon> dsHD=new ArrayList<>();
        ArrayList<SanPham> dsSP=new ArrayList<>();
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
                String ma=sc.next();
                long soLuong=sc.nextLong();
                sc.nextLine();
                String ma1=ma+String.format("-%03d",dem);
                for(SanPham x:dsSP){
                    if(x.getma().equals(ma.substring(0,2))){
                        HoaDon hd=new HoaDon(ma1, soLuong,x);
                        dsHD.add(hd);
                        break;
                    }
                }
            }
            for(HoaDon x:dsHD){
                System.out.println(x);
            }
    }
}