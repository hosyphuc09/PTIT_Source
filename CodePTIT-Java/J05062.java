import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

class HocBong{
    private String ten;
    private double diem,RL,diemChuan;
    public HocBong(String ten,double diem,double RL){
        this.ten=ten;
        this.diem=diem;
        this.RL=RL;
    }
    public String xepLoai(){
    if(diem >= diemChuan){
        if(diem >= 3.6){
            if(RL >= 90){
                return "XUATSAC";
            }else if(RL >= 80){
                return "GIOI";
            }else if(RL >= 70){
                return "KHA";
            }else return "KHONG";
        }else if(diem >= 3.2){
            if(RL >= 80){
                return "GIOI";
            }else if(RL >= 70){
                return "KHA";
            }else{
                return "KHONG";
            }
        }else if(diem >= 2.5){
            if(RL >= 70){
                return "KHA";
            }else{
                return "KHONG";
            }
        }
    }
    return "KHONG";
}
    public void SetDiemChuan(double diemChuan){
        this.diemChuan=diemChuan;
    }
    public double getDiem(){
        return diem;
    }
    @Override 
    public String toString(){
        return ten+": "+xepLoai();
    }
}
public class J05062{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n,m;
        n=sc.nextInt();
        m=sc.nextInt();
        sc.nextLine();
        ArrayList<HocBong> ds=new ArrayList<>();
        while(n-->0){
            String ten=sc.nextLine().trim();
            double diem=sc.nextDouble();
            double RL=sc.nextDouble();
            sc.nextLine();
            HocBong hb=new HocBong(ten, diem, RL);
            ds.add(hb);
        }
        ArrayList<HocBong> sorted=new ArrayList<>(ds);
        Collections.sort(sorted,(a,b)->Double.compare(b.getDiem(),a.getDiem()));
        double diemChuan=sorted.get(m-1).getDiem();
        for(HocBong x:ds){
            x.SetDiemChuan(diemChuan);
        }
        for(HocBong x:ds){
            System.out.println(x);
        }
    }
}