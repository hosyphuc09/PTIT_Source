import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;
import java.util.Collections;

class TienLuong{
    private String ma,ten,chucVu;
    private int luong,ngayCong;
    public TienLuong(String ma,String ten,String chucVu,int luong,int ngayCong){
        this.ma=ma;
        this.ten=ten;
        this.chucVu=chucVu;
        this.luong=luong;
        this.ngayCong=ngayCong;
    }
    public int LuongThang(){
        int luongg=this.luong*ngayCong;
        return luongg;
    }
    public int Thuong(){
        int thuong=0;
        if(ngayCong>=25){
            thuong=LuongThang()*20/100;
        }else if(ngayCong>=22){
            thuong=LuongThang()*10/100;
        }
        return thuong;
    }
    public int PhuCap(){
        int phucap=0;
        if(chucVu.equals("GD")){
            phucap=250000;
        }else if(chucVu.equals("PGD")){
            phucap=200000;
        }else if(chucVu.equals("TP")){
            phucap=180000;
        }else{
            phucap=150000;
        }
        return phucap;
    }
    public int ThucLinh(){
        return LuongThang()+PhuCap()+Thuong();
    }
    @Override 
    public String toString(){
        return ma+" "+ten+" "+LuongThang()+" "
        +Thuong()+" "+PhuCap()+" "+ThucLinh();
    }
}
public class J05040{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<TienLuong> ds=new ArrayList<>();
        int dem=0;
        while(t-->0){
            dem++;
            String ma=String.format("NV%02d",dem);
            String ten=sc.nextLine().trim();
            int luong=Integer.parseInt(sc.nextLine().trim());
            int ngayCong=Integer.parseInt(sc.nextLine().trim());
            String chucVu=sc.nextLine().trim();
            TienLuong tl=new TienLuong(ma, ten, chucVu, luong, ngayCong);
            ds.add(tl);
        }
        Collections.sort(ds,new Comparator<TienLuong>() {
            @Override 
            public int compare(TienLuong a,TienLuong b){
                return Integer.compare(b.ThucLinh(),a.ThucLinh());
            }
        });
        for (TienLuong x:ds){
            System.out.println(x);
        }
       
    }
}