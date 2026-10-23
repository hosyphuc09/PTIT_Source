import java.util.ArrayList;
import java.util.Scanner;

class SinhVien{
    private String ma,ten,lop,email;
    public SinhVien(String ma,String ten,String lop,String email){
        this.ma=ma;
        this.ten=ten;
        this.lop=lop;
        this.email=email;
    }
    public String getLop(){
        return lop;
    }
    public String khoa(){
        String khoa=lop.substring(1,3);
        return khoa;
    }
    public String maNganh(){
        String nganh=ma.substring(3,7);
        return nganh;
    }
    @Override 
    public String toString(){
        return ma+" "+ten+" "+lop+" "+email;
    }
}
public class J05024{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<SinhVien> ds=new ArrayList<>();
        while(t-->0){
            String ma=sc.nextLine().trim();
            String ten=sc.nextLine().trim();
            String lop=sc.nextLine().trim();
            String email=sc.nextLine().trim();
            SinhVien sv=new SinhVien(ma, ten, lop, email);
            ds.add(sv);
        }
        int k=Integer.parseInt(sc.nextLine().trim());
        while(k-->0){
            String nganh=sc.nextLine().trim();
        System.out.println("DANH SACH SINH VIEN NGANH "+nganh.toUpperCase()+":");
        String nganh1="";
        if(nganh.equals("Ke toan")) nganh1="DCKT";
        else if(nganh.equals("Cong nghe thong tin")) nganh1="DCCN";
        else if(nganh.equals("An toan thong tin")) nganh1="DCAT";
        else if(nganh.equals("Vien thong")) nganh1="DCVT";
        else if(nganh.equals("Dien tu")) nganh1="DCDT";
        for(SinhVien x: ds){
            if(nganh1.equals(x.maNganh())){
                if((nganh1.equals("DCCN")||nganh1.equals("DCAT"))&&x.getLop().startsWith("E")){
                    continue;
                }else System.out.println(x);
            }
        }
    }}
}