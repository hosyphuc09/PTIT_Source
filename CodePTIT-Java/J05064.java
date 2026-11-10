import java.util.ArrayList;
import java.util.Scanner;

class ThuNhap{
    private String ma,ten;
    private long luong;
    public ThuNhap(String ma,String ten,long luong){
        this.ma=ma;
        this.ten=ten;
        this.luong=luong;
    }
    public String ChucVu(){
        return ma.substring(0,2);
    }
    public long TroCap(){
        String a=ma.substring(0,2);
        if(a.equals("HT")){
            return 2000000;
        }else if(a.equals("HP")){
            return 900000;
        }else{
            return 500000;
        }
    }
    public int HeSo(){
        return Integer.parseInt(ma.substring(2));
    }
    public long Thunhap(){
        return luong*HeSo()+TroCap();
    }
    @Override 
    public String toString(){
        return ma+" "+ten+" "+HeSo()+" "+TroCap()+
        " "+Thunhap();
    }
}
public class J05064{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<ThuNhap> ds=new ArrayList<>();
        while(t-->0){
            String ma=sc.nextLine().trim();
            String ten=sc.nextLine().trim();
            long luong=Long.parseLong(sc.nextLine().trim());
            ThuNhap tn=new ThuNhap(ma, ten, luong);
            ds.add(tn);
        }
        int n=0;
        int m=0;
        for(ThuNhap x:ds){
            if(x.ChucVu().equals("HT") && n>=1){
                continue;
            }else if(x.ChucVu().equals("HP") && m>=2){
                continue;
            }else{
                System.out.println(x);
                if(x.ChucVu().equals("HT")) n++;
                if(x.ChucVu().equals("HP")) m++;
            }
        }
    }
}