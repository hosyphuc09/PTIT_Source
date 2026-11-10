import java.util.ArrayList;
import java.util.Scanner;

class Kho{
    private String ma;
    private long soLuong;
    public Kho(String ma,long soLuong){
        this.ma=ma;
        this.soLuong=soLuong;
    }
    public long DonGia(){
        char c=ma.charAt(0);
        if(c=='X') return 128000;
        else if(c=='D') return 11200;
        else return 9700;
    }
    
    public long Thue(){
        String ten=ma.substring(3);
        if(ten.equals("TN")) return 0;
        long tien=soLuong*DonGia();
        char c=ma.charAt(0);
        if(c=='X') return tien*3/100;
        else if(c=='D') return tien*7/200;
        else return tien*2/100;
    }
    public long ThanhTien(){
        
    return soLuong*DonGia()+Thue();
    }
    public String TenLoai(){
        String ten=ma.substring(3);
        if(ten.equals("BP")) return "British Petro";
        else if(ten.equals("ES")) return "Esso";
        else if(ten.equals("SH")) return "Shell";
        else if(ten.equals("CA")) return "Castrol";
        else if(ten.equals("MO")) return "Mobil";
        else if(ten.equals("TN")) return "Trong Nuoc";
        return "";
    }
    @Override 
    public String toString(){
        return ma+" "+TenLoai()+" "+DonGia()+" "
        +Thue()+" "+ThanhTien();
    }
}
public class J05067{
    public static void main(String[] agrs){
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<Kho> ds=new ArrayList<>();
        while(t-->0){
            String ma=sc.next();
            long soLuong=Long.parseLong(sc.nextLine().trim());
            Kho kh=new Kho(ma, soLuong);
            ds.add(kh);
        }
        for(Kho x:ds){
            System.out.println(x);
        }
    }
}