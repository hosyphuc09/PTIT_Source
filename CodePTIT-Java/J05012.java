import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class TinhTien{
    private String ma,ten;
    private long soLuong,donGia,chietKhau;
    public TinhTien(String ma,String ten,long soLuong,long donGia,long chietKhau){
        this.ma=ma;
        this.ten=ten;
        this.soLuong=soLuong;
        this.donGia=donGia;
        this.chietKhau=chietKhau;
    }
    public long tong(){
        long tong=donGia*soLuong-chietKhau;
        return tong;
    } 
    @Override 
    public String toString(){
        return ma+" "+ten+" "+soLuong+" "+donGia+" "+chietKhau+" "+tong();
    }
}
public class J05012{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();
        ArrayList<TinhTien> ds=new ArrayList<>();
        while(t-->0){
            String ma=sc.nextLine();
            String ten=sc.nextLine();
            long soLuong=sc.nextLong();
            long donGia=sc.nextLong();
            long chietKhau=sc.nextLong();
            sc.nextLine();
            TinhTien tt=new TinhTien(ma, ten, soLuong, donGia, chietKhau);
            ds.add(tt);
        }
        Collections.sort(ds,new Comparator<TinhTien>() {
            @Override 
            public int compare(TinhTien a,TinhTien b){
                return Long.compare(b.tong(), a.tong());
            }
        });
        for(TinhTien x:ds){
            System.out.println(x);
        }
    }
}