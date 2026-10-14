import java.util.ArrayList;
import java.util.Scanner;
import java.util.Collections;
import java.util.Comparator;

class GiaoVien{
    private String ten,maXT,maGV;
    private double diemT,diemC;
    public GiaoVien(String maGV,String ten,String maXT,double diemT,double diemC){
        this.maGV=maGV;
        this.maXT=maXT;
        this.ten=ten;
        this.diemC=diemC;
        this.diemT=diemT;
    }
    public double tong(){
        char s=maXT.charAt(1);
        double diemU=0;
        double x=s-'0';
        if(x==1){
            diemU=2.0;
        }else if(x==2){
            diemU=1.5;
        }else if(x==3){
            diemU=1.0;
        }
        else if(x==4){
            diemU=0.0;
        }
        double tong=diemT*2+diemC+diemU;
        return tong;
    }
    public String maMon(){
        char c=maXT.charAt(0);
        String s="";
        if(c=='A') s="TOAN";
        else if(c=='B') s="LY";
        else if(c=='C') s="HOA";
        return s;
    }
    public String xet(){
        String s="";
        if(tong()>=18){
            s="TRUNG TUYEN";
        }else s="LOAI";
        return s;
    }
    @Override 
    public String toString(){
        return maGV +" "+ten+" "+maMon()+" "+
        tong()+" "+xet();
    }
}
public class J05014{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();
        int dem=0;
        ArrayList<GiaoVien> ds=new ArrayList<>();
        while(t-->0){
            dem++;
            String ma=String.format("GV%02d",dem);
            String ten=sc.nextLine();
            String maXT=sc.nextLine();
            double diemT=sc.nextDouble();
            double diemC=sc.nextDouble();
            sc.nextLine();
            GiaoVien gv=new GiaoVien(ma, ten, maXT, diemT, diemC);
            ds.add(gv);
        }
        Collections.sort(ds,new Comparator<GiaoVien>(){
            @Override 
            public int compare(GiaoVien a,GiaoVien b){
                return Double.compare(b.tong(),a.tong());
            }
        });
        for (GiaoVien x:ds){
            System.out.println(x);
        }
    }
}