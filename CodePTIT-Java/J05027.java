import java.util.Scanner;
import java.util.*;
class GiangVien{
    private String ma,ten,boMon;
    public GiangVien(String ma,String ten,String boMon){
        this.ma=ma;
        this.ten=ten;
        this.boMon=boMon;
    }
    public String ten(){
        String[] a=ten.split(" ");
        String ten=a[a.length-1];
        return ten;
    }
    public String boMon(){
        String[] a=boMon.split(" ");
        String s="";
        for(int i=0;i<a.length;i++){
            s+=Character.toUpperCase(a[i].charAt(0));
        }
        return s;
    }
    public String getMa(){
        return ma;
    }
    public String layTen(){
        String s="";
        String[] a=ten.split(" ");
        for(String x:a){
            s+=x.toLowerCase();
        }
        return s;
    }
    @Override 
    public String toString(){
        return ma+" "+ten+" "+boMon();
    }
}
public class J05027{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<GiangVien> ds=new ArrayList<>();
        int dem=0;
        while(t-->0){
            dem++;
            String ma=String.format("GV%02d",dem);
            String ten=sc.nextLine().trim();
            String boMon=sc.nextLine().trim();
            GiangVien gv=new GiangVien(ma, ten, boMon);
            ds.add(gv);
        }
        int k=Integer.parseInt(sc.nextLine().trim());
        while(k-->0){
            String tuKhoa=sc.nextLine().trim();
            System.out.println("DANH SACH GIANG VIEN THEO TU KHOA "+tuKhoa+":");
            tuKhoa=tuKhoa.toLowerCase();
            for(GiangVien x: ds){
                if(x.layTen().contains(tuKhoa)){
                    System.out.println(x);
                }
            }
        }
    }
}