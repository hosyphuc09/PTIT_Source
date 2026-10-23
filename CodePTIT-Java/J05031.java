import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class BangDiem{
    private String ma,ten,lop;
    
    private double diem1,diem2,diem3;
    public BangDiem(String ma,String ten,String lop,double diem1,double diem2,double diem3){
        this.ma=ma;
        this.ten=ten;
        this.lop=lop;
        this.diem1=diem1;
        this.diem2=diem2;
        this.diem3=diem3;
        
    }
    public String getTen(){
        return ten;
    }
    public String getMa(){
        return  ma;
    }
    @Override 
    public String toString(){
        return ma+" "+ten+" "+lop+" "
        +String.format("%.1f",diem1)+ " "+String.format("%.1f",diem2)+" "+
        String.format("%.1f",diem3);
    }
}
public class J05031{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<BangDiem> ds=new ArrayList<>();
    
        while(t-->0){
            
            String ma=sc.nextLine().trim();
            String ten=sc.nextLine().trim();
            String lop=sc.nextLine().trim();
            double diem1=Double.parseDouble(sc.nextLine().trim());
            double diem2=Double.parseDouble(sc.nextLine().trim());
            double diem3=Double.parseDouble(sc.nextLine().trim());
            BangDiem bd=new BangDiem(ma, ten, lop, diem1, diem2, diem3);
            ds.add(bd);
        }
        Collections.sort(ds,new Comparator<BangDiem>() {
            @Override 
            public int compare(BangDiem a,BangDiem b){
                return a.getTen().compareTo(b.getTen());
            }
        });
        int dem=0;
        for(BangDiem x: ds){
            dem++;
            System.out.println(dem+" "+x);
        }
    }
}