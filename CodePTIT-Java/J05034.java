import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;
import java.util.Collections;

class ThucTap{
    private String ma,ten,lop,email,doanhNgiep;
    private int stt;
    public ThucTap(int stt, String ma,String ten,String lop,String email,String doanhNghiep){
        this.stt=stt;
        this.ma=ma;
        this.ten=ten;
        this.lop=lop;
        this.email=email;
        this.doanhNgiep=doanhNghiep;
    }
    public String getTen(){
        return ten;
    }
    public String getDoanh(){
        return doanhNgiep;
    }
    @Override 
    public String toString(){
        return stt+" "+ma+" "+ten+" "+lop+
        " "+email+" "+doanhNgiep;
    }
}
public class J05034{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        int dem=0;
        ArrayList<ThucTap> ds=new ArrayList<>();
        while(t-->0){
            dem++;
            String ma=sc.nextLine().trim();
            String ten=sc.nextLine().trim();
            String lop=sc.nextLine().trim();
            String email=sc.nextLine().trim();
            String doanhNghiep=sc.nextLine().trim();
            ThucTap tt=new ThucTap(dem, ma, ten, lop, email, doanhNghiep);
            ds.add(tt);
        }
        Collections.sort(ds,new Comparator<ThucTap> (){
            @Override 
            public int compare(ThucTap a,ThucTap b){
                return a.getTen().compareTo(b.getTen());
            }
        });
        int k=Integer.parseInt(sc.nextLine().trim());
        while(k-->0){
            String tenCT=sc.nextLine().trim();
            for (ThucTap x:ds){
                if(x.getDoanh().equals(tenCT)){
                    System.out.println(x);
                }
            }
        }
    }
}