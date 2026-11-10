import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class SinhVien{
    private String ma,ten;
    private double diemT,diemL,diemH;
    public SinhVien(String ma,String ten,double diemT,double diemL,double diemH){
        this.ma=ma;
        this.ten=ten;
        this.diemT=diemT;
        this.diemL=diemL;
        this.diemH=diemH;
    }
    public double diemUuTien(){
        String kv=ma.substring(0,3);
        if(kv.equals("KV1")){
            return 0.5;
        }else if(kv.equals("KV2")){
            return 1;
        }else{
            return 2.5;
        }
    }
    public double TongDiem(){
        double tong=diemT*2+diemL+diemH;
        return tong+diemUuTien();
    }
    public String getMa(){
        return ma;
    }
    public String loai(){
        double tong=TongDiem();
        if(tong>=24){
            return "TRUNG TUYEN";
        }else{
            return "TRUOT";
        }
    }
    public String chuanHoa(double n){
        if(n==(long)n){
            return String.format("%.0f",n);
        }else{
            return String.format("%.01f",n);
        }
    }
    @Override 
    public String toString(){
        return ma +" "+ten+" "+chuanHoa(diemUuTien())+" "+chuanHoa(TongDiem())+" "+loai();
    }
}
public class J05058{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<SinhVien> ds=new ArrayList<>();
        while(t-->0){
            String ma=sc.nextLine().trim();
            String ten=sc.nextLine().trim();
            double diemT=Double.parseDouble(sc.nextLine().trim());
            double diemL=Double.parseDouble(sc.nextLine().trim());
            double diemH=Double.parseDouble(sc.nextLine().trim());
            SinhVien sv=new SinhVien(ma, ten, diemT, diemL, diemH);
            ds.add(sv);
        }
        Collections.sort(ds,new Comparator<SinhVien>() {
            @Override 
            public int compare(SinhVien a,SinhVien b){
                if(a.TongDiem()!=b.TongDiem()){
                    return Double.compare(b.TongDiem(),a.TongDiem());
                }else{
                    return a.getMa().compareTo(b.getMa());
                }
            }
        });
        for(SinhVien x:ds){
            System.out.println(x);
        }
    }
}