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
public class J07018 {
    public static void main(String[] args) throws Exception{
        Scanner sc=new Scanner(new File("SINHVIEN.in"));
        int t=Integer.parseInt(sc.nextLine());
        int dem=0;
        while(t-->0){
            dem++;
            String ma=String.format("B20DCCN%03d",dem);
            String ten=sc.nextLine().trim();
            String lop=sc.nextLine().trim();
            String ngaySinh=sc.nextLine().trim();
            float diem=Float.parseFloat(sc.nextLine().trim());
            String[] a=ngaySinh.split("/");
            if(a[0].length()==1){
                a[0]="0"+a[0];
            }
            if(a[1].length()==1){
                a[1]="0"+a[1];
            }
            String ngay=a[0]+"/"+a[1]+"/"+a[2];
            String[] b=ten.split("\\s+");
            for(int i=0;i<b.length;i++){
                b[i]=Character.toUpperCase(b[i].charAt(0))+b[i].substring(1).toLowerCase();
            }
            String tenM="";
            for(String x:b){
                tenM+=x+" ";
            }
            SinhVien sv=new SinhVien(ma, tenM, lop, ngay, diem);
            System.out.println(sv);
        }
    }
}
