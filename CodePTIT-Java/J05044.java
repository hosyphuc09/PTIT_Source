import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class ThuNhap{
    private String ma,ten,chucVu;
    private int luong,ngayCong;
    public ThuNhap(String ma,String ten,String chucVu,int luong,int ngayCong){
        this.ma=ma;
        this.ten=ten;
        this.chucVu=chucVu;
        this.luong=luong;
        this.ngayCong=ngayCong;
    }
    public int PhuCap(){
        if(chucVu.equals("GD")){
            return 500;
        }else if(chucVu.equals("PGD")){
            return 400;
        }else if(chucVu.equals("TP")){
            return 300;
        }else if(chucVu.equals("KT")){
            return 250;
        }else{
            return 100;
        }
    }
    public long Luong(){
        return (long) Math.floor((luong*ngayCong+PhuCap())/1000.0)*1000;
    }
    public long TamUng(){
        double tong=(PhuCap()+Luong())*2/3;
        
        if(tong<25000){
            return Math.round(((PhuCap()+Luong())*2/3)/1000.0)*1000;
        }else{
            return 25000;
        }
    }
    public String getMa(){
        return ma;
    }
    public long Conlai(){
        return Luong()-TamUng()+PhuCap();
    }
    public String getChucVu(){
        return chucVu;
    }
    @Override 
    public String toString(){
        return ma+" "+ten+" "+PhuCap()+" "+Luong()+
        " "+TamUng()+" "+Conlai();
    }
}
public class J05044{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        int dem=0;
        ArrayList<ThuNhap> ds=new ArrayList<>();
        while(t-->0){
            dem++;
            String ma=String.format("NV%02d",dem);
            String ten=sc.nextLine().trim();
            String chucVu=sc.nextLine().trim();
            int luong=Integer.parseInt(sc.nextLine().trim());
            int ngayCong=Integer.parseInt(sc.nextLine().trim());
            ThuNhap tn=new ThuNhap(ma, ten, chucVu, luong, ngayCong);
            ds.add(tn);
        }
        Collections.sort(ds,new Comparator<ThuNhap>() {
            @Override 
            public int compare(ThuNhap a,ThuNhap b){
                if(a.Luong()!=b.Luong()){
                    return Long.compare(b.Luong(),a.Luong());
                }else{
                    return a.getMa().compareTo(b.getMa());
                }
            }
        });
        for(ThuNhap x:ds){
            System.out.println(x);
        }
    }
}