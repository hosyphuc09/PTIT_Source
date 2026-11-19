import java.io.File;
import java.util.Scanner;

class SinhVien{
    private String ma,ten,lop,ngaySinh;
    private float diem;
    public SinhVien(String ma,String ten,String lop,String ngaySinh,float diem){
        this.ma=ma;
        this.ten=ten;
        this.lop=lop;
        this.ngaySinh=ngaySinh;
        this.diem=diem;
    }
    @Override 
    public String toString(){
        return ma+" "+ten+" "+lop+" "+ngaySinh+" "+String.format("%.2f",diem);
    }
}
public class J07010{
    public static void main(String[] args) throws Exception{
        Scanner sc=new Scanner(new File("SV.in"));
        int t=Integer.parseInt(sc.nextLine().trim());
        int dem=0;
        while(t-->0){
            dem++;
            String ten=sc.nextLine();
            String lop=sc.nextLine();
            String ngaySinh=sc.nextLine().trim();
            float diem=Float.parseFloat(sc.nextLine().trim());
            String ma=String.format("B20DCCN%03d",dem);
            String[] a=ngaySinh.split("/");
            if(a[0].length()==1){
                a[0]="0"+a[0];
            }
            if(a[1].length()==1){
                a[1]="0"+a[1];
            }
            String ngayM=a[0]+"/"+a[1]+"/"+a[2];
            SinhVien sv=new SinhVien(ma, ten,lop, ngayM, diem);
            System.out.println(sv);
        }
    }
}