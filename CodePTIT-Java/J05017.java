import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class TienNuoc{
    private String ten,ma;
    private int soCu,soMoi;
    public TienNuoc(String ma,String ten,int soCu,int soMoi){
        this.ma=ma;
        this.ten=ten;
        this.soCu=soCu;
        this.soMoi=soMoi;
    }
    public long tong(){
        int so=soMoi-soCu;
        double tong=0;
        if(so>=0&&so<=50){
            tong=(so*100)*1.02;
        }else if(so>50&&so<=100){
            tong=(50*100+(so-50)*150)*1.03;
        }else if(so>100){
            tong=(50*100+50*150+(so-100)*200)*1.05;
        }
        return Math.round(tong);
    }
    @Override 
    public String toString(){
        return ma+" "+ten+" "+tong();
    }
}
public class J05017{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt((sc.nextLine().trim()));
        int dem=0;
        ArrayList<TienNuoc> ds=new ArrayList<>();
        while(t-->0){
            dem++;
            String ma=String.format("KH%02d", dem);
            String ten=sc.nextLine().trim();
            int soCu=Integer.parseInt(sc.nextLine().trim());
            int soMoi=Integer.parseInt(sc.nextLine().trim());
            TienNuoc tn=new TienNuoc(ma, ten, soCu, soMoi);
            ds.add(tn);
        }
        Collections.sort(ds,new Comparator<TienNuoc>() {
            @Override 
            public int compare(TienNuoc a,TienNuoc b){
                return Long.compare(b.tong(), a.tong());
            }
        });
        for(TienNuoc x:ds){
            System.out.println(x);
        }
    }
}