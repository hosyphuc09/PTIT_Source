import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class GiaBan{
    private String ma,ten,donVi;
    private int donGia,soLuong;
    public GiaBan(String ma,String ten,String donVi,int donGia,int soLuong){
        this.ma=ma;
        this.ten=ten;
        this.donVi=donVi;
        this.donGia=donGia;
        this.soLuong=soLuong;
    }
    public long phiVanChuyen(){
        return Math.round(donGia*(long)soLuong*0.05);
    }
    public long thanhTien(){
        
        return Math.round((long) donGia*soLuong+phiVanChuyen());
    }
    public long giaBan(){
        return (long)Math.ceil(thanhTien()*1.02/soLuong/100.0)*100;
    }
    @Override 
    public String toString(){
        return ma+" "+ten+" "+donVi+" "+phiVanChuyen()+
        " "+thanhTien()+" "+giaBan();
    }
}
public class J05037{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<GiaBan> ds=new ArrayList<>();
        int dem=0;
        while(t-->0){
            dem++;
            String ma=String.format("MH%02d",dem);
            String ten=sc.nextLine().trim();
            String donVi=sc.nextLine().trim();
            int donGia=Integer.parseInt(sc.nextLine().trim());
            int soLuong=Integer.parseInt(sc.nextLine().trim());
            GiaBan gb=new GiaBan(ma, ten, donVi, donGia, soLuong);
            ds.add(gb);
        }
        Collections.sort(ds,new Comparator<GiaBan>() {
            @Override 
            public int compare(GiaBan a,GiaBan b){
                return Long.compare(b.giaBan(),a.giaBan());
            }
        });
        for (GiaBan x:ds){
            System.out.println(x);
        }
    }
}