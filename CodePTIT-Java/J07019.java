import java.util.ArrayList;
import java.util.Scanner;
import java.io.*;

class SanPham{
    private String ma,ten;
    private long don1,don2;
    public SanPham(String ma,String ten,long don1,long don2){
        this.ma=ma;
        this.ten=ten;
        this.don1=don1;
        this.don2=don2;
    }
    public String gieTen(){
        return ten;
    }
    public long getGia1(){
        return don1;
    }
    public long getGia2(){
        return don2;
    }
    public String getMa(){
        return  ma;
    }
}
class HoaDon{
    private String ma;
    private long soLuong;
    private SanPham sp;
    private String maM;
    public HoaDon(String ma,long soLuong,SanPham sp){
        this.ma=ma;
        this.soLuong=soLuong;
        this.sp=sp;
    }
    public void themMa(int dem){
        this.maM=String.format(this.ma+"-%03d",dem);
    }
    public long GiamGia(){
        
        if(soLuong>=150){
            return Tien()*50/100;
        }else if(soLuong>=100){
            return Tien()*30/100;
        }else if(soLuong>=50){
            return Tien()*15/100;
        }
        return 0;
    }
    public long Tien(){
        if(ma.charAt(2)=='1'){
            return soLuong*sp.getGia1();
        }
        return soLuong*sp.getGia2();
    }
    public long TongTien(){
        return Tien()-GiamGia();
    }
    @Override 
    public String toString(){
        return maM+" "+sp.gieTen()+" "+GiamGia()+" "+TongTien();
    }
}
public class J07019{
    public static void main(String[] args) throws Exception{
        Scanner sc=new Scanner(new File("DATA1.in"));
        ArrayList<SanPham> dsSP=new ArrayList<>();
        ArrayList<HoaDon> dsHD=new ArrayList<>();
        int t=Integer.parseInt(sc.nextLine().trim());
        while(t-->0){
            String masp=sc.nextLine();
            String ten=sc.nextLine().trim();
            long don1=Long.parseLong(sc.nextLine().trim());
            long don2=Long.parseLong(sc.nextLine().trim());
            SanPham sp=new SanPham(masp, ten, don1, don2);
            dsSP.add(sp);
        }
        Scanner ss=new Scanner(new File("DATA2.in"));
        int k=Integer.parseInt(ss.nextLine().trim());
        int dem=0;
        while(k-->0){
            
            String ma=ss.next();
            long soLuong=Long.parseLong(ss.nextLine().trim());
            String setma=ma.substring(0,2);
            for (SanPham x:dsSP){
                if(x.getMa().equals(setma)){
                    dem++;
                    HoaDon hd=new HoaDon(ma, soLuong,x);
                    hd.themMa(dem);
                    dsHD.add(hd);
                }
            }
        }
        for(HoaDon x:dsHD){
            System.out.println(x);
        }
    }
}