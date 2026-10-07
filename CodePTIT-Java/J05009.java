import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;
import java.util.Comparator;

class ThiSinh{
    private String ma,hoTen,ngaySinh;
    private double diem1,diem2,diem3;
    public ThiSinh(String ma,String hoTen,String ngaySinh,double diem1,double diem2,double diem3){
        this.ma=ma;
        this.hoTen=hoTen;
        this.ngaySinh=ngaySinh;
        this.diem1=diem1;
        this.diem2=diem2;
        this.diem3=diem3;
    }
    public double tong(){
        double tong=diem1+diem2+diem3;
        return tong;
    }
    @Override 
    public String toString(){
        return ma+" "+hoTen+" "+ngaySinh+" "+tong();
    }
}
public class J05009{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int dem=0;
        int t=sc.nextInt();
        sc.nextLine();
        ArrayList<ThiSinh> ds=new ArrayList<>();
        
        while(t-->0){
            dem++;
            String ma=String.valueOf(dem);
            String hoTen=sc.nextLine();
            String ngaySinh=sc.nextLine();
            double diem1=sc.nextDouble();
            double diem2=sc.nextDouble();
            double diem3=sc.nextDouble();
            sc.nextLine();
            ThiSinh ts=new ThiSinh(ma, hoTen, ngaySinh, diem1, diem2, diem3);
            ds.add(ts);
        }
        Collections.sort(ds,new Comparator<ThiSinh>(){
            @Override 
            public int compare(ThiSinh a,ThiSinh b){
                return Double.compare(b.tong(),a.tong());
            }
        });
        double check=ds.get(0).tong();
        for(ThiSinh x:ds){
            if(x.tong()==check){
            System.out.println(x);}
        }
    }
}