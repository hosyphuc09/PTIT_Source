import java.util.ArrayList;
import java.util.Scanner;

class SinhVien{
    private String ma,ten,sdt;
    private int nhom;
    public SinhVien(String ma,String ten,String sdt,int nhom){
        this.ma=ma;
        this.ten=ten;
        this.sdt=sdt;
        this.nhom=nhom;
    }
    public String getMa(){
        return ma;
    }
    public int getNhom(){
        return nhom;
    }
    @Override 
    public String toString(){
        return ma+" "+ten+" "+sdt+" "+nhom;
    }
}
class Nhom{
    private String deTai;
    private int ma;
    private ArrayList<SinhVien> dsSV;
    public Nhom(int ma){
        this.ma=ma;
        this.dsSV=new ArrayList<>();
    }
    public void ThemSV(SinhVien x){
        this.dsSV.add(x);
    }
    public void ThemDeTai(String s){
        this.deTai=s;
    }
    public String getDeTai(){
        return deTai;
    }
    public void HienThi(){
        for(SinhVien x:dsSV){
            System.out.println(x+" "+deTai);
        }
    }
}
public class J06004{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();
        sc.nextLine();
        ArrayList<Nhom> dsNhom=new ArrayList<>();
        ArrayList<SinhVien> dsSV=new ArrayList<>();
        for(int i=0;i<m;i++){
            dsNhom.add(new Nhom(i));
        }
        for(int i=0;i<n;i++){
            String ma=sc.nextLine().trim();
            String ten=sc.nextLine().trim();
            String sdt=sc.nextLine().trim();
            int nhom=Integer.parseInt(sc.nextLine().trim());
            SinhVien sv=new SinhVien(ma, ten, sdt, nhom);
            dsSV.add(sv);
            dsNhom.get(nhom-1).ThemSV(sv);
        }
        for (int i=0;i<m;i++){
            String deTai=sc.nextLine().trim();
            dsNhom.get(i).ThemDeTai(deTai);
        }
        dsSV.sort((a,b)->a.getMa().compareTo(b.getMa()));
        for(SinhVien sv:dsSV){
            int nhom=sv.getNhom();
            String deTai=dsNhom.get(nhom-1).getDeTai();
            System.out.println(sv+" "+deTai);
        }
    }
}