import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;
import java.util.Comparator;

class SinhVien{
    private String ma;
    private String hoTen;
    private String lop;
    private String ngaySinh;
    private double gpa;
    public SinhVien(){
        ma="";
        hoTen="";
        lop="";
        ngaySinh="";
        gpa=0;
    }
    public SinhVien(String ma,String hoTen,String lop,String ngaySinh,double gpa){
        this.hoTen=hoTen;
        this.lop=lop;
        this.ngaySinh=ngaySinh;
        this.gpa=gpa;
        this.ma=ma;
    }
    public String getMa(){
        return ma;
    }
    public String gethoTen(){
        return hoTen;
    }
    public String getLop(){
        return lop;
    }
    public double getgpa(){
        return gpa;
    }
    public String getNgaySinh(){
        return ngaySinh;
    }
    @Override 
    public String toString(){
        return ma+" "+hoTen+" "+lop+" "+ngaySinh+" "+String.format("%.2f",gpa);
    }
}
public class J05005{
    public static void main(String[] arge){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();
        int dem=0;
        ArrayList<SinhVien> ds=new ArrayList<>();
        while(t-->0){
            dem++;
            String hoTen=sc.nextLine();
            String lop=sc.nextLine();
            String ngaySinh=sc.nextLine();
            double gpa=sc.nextDouble();
            sc.nextLine();
            String ma=String.format("B20DCCN%03d",dem);
            String[] s=hoTen.trim().split("\\s+");
            String newname="";
            for(String x:s){
                String name=Character.toUpperCase(x.charAt(0))+
                           x.substring(1).toLowerCase();
                if(newname.length()>0){
                    newname+=" ";
                }
                newname+=name;
            }
            String[] day=ngaySinh.split("/");
            String date="";
            String d="",m="";
            if(day[0].length()==1){
                d="0"+day[0];
            }else d=day[0];
            if(day[1].length()==1){
                m="0"+day[1];
            }else m=day[1];
            date=d+"/"+m+"/"+day[2];
            SinhVien sv=new SinhVien(ma,newname,lop,date,gpa);
            ds.add(sv);
        }
        Collections.sort(ds,new Comparator<SinhVien>(){
            @Override 
            public int compare(SinhVien a,SinhVien b){
                return Double.compare(b.getgpa(), a.getgpa());
            }
        });
        for(SinhVien x:ds){
            System.out.println(x);
        }
    }
}