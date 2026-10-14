import java.util.ArrayList;
import java.util.Scanner;

class LuongMua{
    private  String ma,ten;
    private int phut;
    private double luongMua;
    public LuongMua(String ma,String ten){
        this.ma=ma;
        this.ten=ten;
    }
    public void napDuLieu(int phut,double luonngMua){
        this.phut+=phut;
        this.luongMua+=luonngMua;
    }
    public double muaTB(){
        return (luongMua/phut)*60;
    }
    public String getTen(){
        return ten;
    }
    @Override 
    public String toString(){
        return ma+" "+ten+" "+String.format("%.2f",muaTB());
    }
}
public class J05019{
    private static int Tophut(String s){
        String[] a=s.split(":");
        int phut=Integer.parseInt(a[0])*60+Integer.parseInt(a[1]);
        return phut;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<LuongMua> ds=new ArrayList<>();
        while(t-->0){
            String ten=sc.nextLine().trim();
            String batdau=sc.nextLine().trim();
            String ketthuc=sc.nextLine().trim();
            double luongmua=Double.parseDouble(sc.nextLine().trim());
            int thoiGianMua=Tophut(ketthuc)-Tophut(batdau);
            LuongMua tramcoSan=null;
            for(LuongMua x:ds){
                if(x.getTen().equals(ten)){
                tramcoSan=x;
                break;
            }}
            if(tramcoSan!=null){
                tramcoSan.napDuLieu(thoiGianMua, luongmua);
            }else{
                String ma=String.format("T%02d",ds.size()+1);
                LuongMua tramMoi=new LuongMua(ma, ten);
                tramMoi.napDuLieu(thoiGianMua, luongmua);
                ds.add(tramMoi);
            }
        }
        for(LuongMua x:ds){
            System.out.println(x);
        }
    }
}