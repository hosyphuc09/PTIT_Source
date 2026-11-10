import java.util.Scanner;

class GiaBan{
    private String ma;
    private long donGia,soLuong;
    public GiaBan(String ma,long donGia,long soLuong){
        this.ma=ma;
        this.donGia=donGia;
        this.soLuong=soLuong;
    }
    public double thue(){
        char c=ma.charAt(0);
        if(c=='T') return 0.29;
        else if(c=='C') return 0.1;
        else if(c=='D') return 0.08;
        else return 0.02;
    }
    public double PhiVC(){
        char c=ma.charAt(0);
        if(c=='T') return 0.04;
        else if(c=='C') return 0.03;
        else if(c=='D') return 0.025;
        else return 0.005;
    }
    public double Tong(){
        char c=ma.charAt(ma.length()-1);
        double tien=donGia*soLuong;
        double thue=tien*thue();
        double vc=tien*PhiVC();
        if(c=='C'){
            thue=thue*0.95;
        }
        double tong=(tien+thue+vc)*1.2;
        return tong/(double)soLuong;
    }
    @Override 
    public String toString(){
        return ma+" "+String.format("%.02f",Tong());
    }
}
public class J05073{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        while(t-->0){
            String ma=sc.next();
            long donGia=sc.nextLong();
            long soLuong=Long.parseLong(sc.nextLine().trim());
            GiaBan gb=new GiaBan(ma, donGia, soLuong);
            System.out.println(gb);
        }
    }
}