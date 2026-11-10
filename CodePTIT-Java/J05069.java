import java.util.ArrayList;
import java.util.Scanner;

class CLB{
    private String ma,ten;
    private long giaVe;
    public CLB(String ma,String ten,long giaVe){
        this.ma=ma;
        this.ten=ten;
        this.giaVe=giaVe;
    }
    public String getMa(){
        return ma;

    }
    public String getTen(){
        return ten;
    }
    public Long getGia(){
        return giaVe;
    }
}
class TranDau{
    private String ma;
    private long soLuong;
    private CLB clb;
    public TranDau(String ma,CLB clb,long soLuong){
        this.ma=ma;
        this.soLuong=soLuong;
        this.clb=clb;
    }
    public long Gia(){
        return soLuong*clb.getGia();
    }
    @Override 
    public String toString(){
        return ma+" "+clb.getTen()+" "+Gia();
    }
}
public class J05069{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<CLB> ds=new ArrayList<>();
        while(t-->0){
            String ma=sc.nextLine().trim();
            String ten=sc.nextLine().trim();
            long gia=Long.parseLong(sc.nextLine().trim());
            CLB clb=new CLB(ma, ten, gia);
            ds.add(clb);
        }
        int k=Integer.parseInt(sc.nextLine().trim());
        for(int i=0;i<k;i++){
            String ma=sc.next();
            long soLuong=Long.parseLong(sc.nextLine().trim());
            String ma1=ma.substring(1,3);
            for(CLB x:ds){
                if(x.getMa().equals(ma1)){
                    TranDau td=new TranDau(ma,x, soLuong);
                    System.out.println(td);
                }
            }
        }
    }
}