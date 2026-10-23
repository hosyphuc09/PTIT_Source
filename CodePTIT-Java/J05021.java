import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class SinhVien{
    private String ma,ten,lop,email;
    public SinhVien(String ma,String ten,String lop,String email){
        this.ma=ma;
        this.ten=ten;
        this.lop=lop;
        this.email=email;
    }
    public String getLop(){
        return lop;
    }
    public String getMa(){
        return ma;
    }
    @Override 
    public String toString(){
        return ma+" "+ten+" "+lop+" "+email;
    }
}
public class J05021{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        
        ArrayList<SinhVien> ds=new ArrayList<>();
        while(sc.hasNextLine()){
            String ma=sc.nextLine().trim();
            String ten=sc.nextLine().trim();
            String lop=sc.nextLine().trim();
            String email=sc.nextLine().trim();
            SinhVien sv=new SinhVien(ma, ten, lop, email);
            ds.add(sv);
        }
        Collections.sort(ds,new Comparator<SinhVien>() {
            @Override 
            public int compare(SinhVien a,SinhVien b){
                    return a.getMa().compareTo(b.getMa());}
        });
        for(SinhVien x: ds){
            System.out.println(x);
        }
    }
}