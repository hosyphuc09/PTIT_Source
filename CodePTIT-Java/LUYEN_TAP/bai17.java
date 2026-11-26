import java.io.File;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;
class NhanVien{
    private String ma,ten,gioiTinh;
    private long luong;
    public NhanVien(String ma,String ten,String gioiTinh,long luong){
        this.ma=ma;
        this.ten=ten;
        this.gioiTinh=gioiTinh;
        this.luong=luong;
    }
    public long getLuong(){
        return luong;
    }
    @Override 
    public String toString(){
        return  ma+" "+ten+" "+gioiTinh+" "+luong;
    }
}
public class bai17{
    public static void main(String[] args) throws Exception{
        Scanner sc=new Scanner(new File("nhanvien.dat"));
        ArrayList<NhanVien> ds=new ArrayList<>();
        while(sc.hasNext()){
            String s=sc.nextLine();
            String[] a=s.split("/");
            String ma=a[0];
            String ten=a[1];
            String gioiTinh=a[2];
            long luong=Long.parseLong(a[3]);
            if(gioiTinh.equals("true")){
                gioiTinh="nam";
            }else{
                gioiTinh="nu";
            }
            NhanVien nv=new NhanVien(ma, ten, gioiTinh, luong);
            ds.add(nv);
        }
    Collections.sort(ds,new Comparator<NhanVien>() {
        @Override 
        public int compare(NhanVien a,NhanVien b){
            return  Long.compare(a.getLuong(), b.getLuong());
        }
    });
    for(NhanVien x:ds){
        System.out.println(x);
    }
    }
}