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
    public String getTen(){
        return ten;
    }
    public String getsdt(){
        return sdt;
    }
    public int getNhom(){
        return nhom;
    }
}
class Nhom{
    private String deTai;
    private SinhVien sv;
    public Nhom(String deTai,SinhVien sv){
        this.deTai=deTai;
        this.sv=sv;
    }
    public int getnhom(){
        return sv.getNhom();
    }
    public String getdetai(){
        return deTai;
    }
    @Override 
    public String toString(){
        return sv.getMa()+" "+sv.getTen()+" "+sv.getsdt();
    }
}
public class J06003{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
       
        ArrayList<SinhVien> dsSV=new ArrayList<>();
        ArrayList<Nhom> dsN=new ArrayList<>();
        int n=sc.nextInt();
        int m=sc.nextInt();
        sc.nextLine();
        while(n-->0){
            String ma=sc.nextLine().trim();
            String ten=sc.nextLine().trim();
            String sdt=sc.nextLine().trim();
            int nhom=Integer.parseInt(sc.nextLine().trim());
            SinhVien sv=new SinhVien(ma, ten, sdt, nhom);
            dsSV.add(sv);
        } 
        for(int i=1;i<=m;i++){
            String tenNhom=sc.nextLine().trim();
            for(SinhVien sv:dsSV){
                if(sv.getNhom()==i){
                    Nhom nh=new Nhom(tenNhom,sv);
                    dsN.add(nh);
                }
            }
        }
        int k=Integer.parseInt(sc.nextLine().trim());
        while(k-->0){
            int nhom1=sc.nextInt();
            System.out.println("DANH SACH NHOM "+nhom1+":");
            Nhom q=null;
            for(Nhom x:dsN){
                if(nhom1==x.getnhom()){
                    q=x;
                System.out.println(x);}
            }
            System.out.println("Bai tap dang ky: "+q.getdetai());
        }
    }
}