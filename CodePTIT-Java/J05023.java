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
    @Override 
    public String toString(){
        return ma+" "+ten+" "+lop+" "+email;
    }
}
public class J05023{
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
            String khoa=sc.nextLine().trim();
            System.out.println("DANH SACH SINH VIEN KHOA "+khoa+":");
            String nam=khoa.substring(2);
            for(SinhVien x:ds){
                if(nam.equals(x.khoa())){
                    System.out.println(x);
                }
            }
        }
    }
}