import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class XetTuyen{
    private String ma,ten,ngaySinh;
    private double diemLT,diemTT;
    public XetTuyen(int ma,String ten,String ngaySinh,double diemLT,double diemTT){
        this.ma=String.format("PH%02d",ma);
        this.ten=ten;
        this.ngaySinh=ngaySinh;
        this.diemLT=diemLT;
        this.diemTT=diemTT;
    }
    public String getMa(){
        return ma;
    }
    public int tuoi(){
        String[] a=ngaySinh.split("/");
        return 2021-Integer.parseInt(a[2]);
    }
    public long diem(){
        double tong=(diemTT+diemLT)/2+diemCong();
        return Math.min(10,Math.round(tong));
    }
    public double diemCong(){
        if(diemTT>=8 &&diemLT>=8){
            return 1;
        }else if(diemLT >=7.5 && diemTT>=7.5){
            return 0.5;
        }else{
            return 0;
        }
    }
    public String xepLoai(){
        
        if(diem()==5 || diem()==6){
            return "Trung binh";
        }else if(diem()==7){
            return "Kha";
        }else if(diem()==8){
            return "Gioi";
        }else if(diem()==9 || diem()==10){
            return "Xuat sac";
        }else{
            return "Truot";
        }
        
    }
    @Override 
    public String toString(){
        return ma+" "+ten+" "+tuoi()+" "+diem()+" "+xepLoai();
    }
}
public class J05061{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<XetTuyen> ds=new ArrayList<>();
        int dem=0;
        while(t-->0){
            dem++;
            String ten=sc.nextLine().trim();
            String ngaySinh=sc.nextLine().trim();
            double diemLT=Double.parseDouble(sc.nextLine().trim());
            double diemTT=Double.parseDouble(sc.nextLine().trim());
            XetTuyen xt=new XetTuyen(dem, ten, ngaySinh, diemLT, diemTT);
            ds.add(xt);
        }
        Collections.sort(ds,new Comparator<XetTuyen>() {
            @Override 
            public int compare(XetTuyen a,XetTuyen b){
                if(a.diem()!=b.diem()){
                   return Double.compare(b.diem(),a.diem());
                }else{
                    return a.getMa().compareTo(b.getMa());
                }
            }
        });
        for(XetTuyen x:ds){
            System.out.println(x);
        }
    }
}