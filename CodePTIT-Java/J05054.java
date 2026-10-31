import java.util.ArrayList;
import java.util.Scanner;
import java.util.Collections;

class XepHang{
    private String ten,ma;
    private double dtb;
    private int hang;
    public XepHang(String ma,String ten,double dtb){
        this.ma=ma;
        this.ten=ten;
        this.dtb=dtb;
    }
    public void Sethang(int hang){
        this.hang=hang;
    }
    public double getdtb(){
        return dtb;
    }

    public String Loai(){
        if(dtb<5){
            return "Yeu";
        }else if(dtb>=5&&dtb<7){
            return "Trung Binh";
        }else if(dtb>=7&&dtb<9){
            return "Kha";
        }else if(dtb>=9){
            return "Gioi";
        }
        return "";
    }
    @Override 
    public String toString(){
        return ma+" "+ten+" "+dtb+" "+Loai()+" "+hang;
    }
}
public class J05054{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<XepHang> ds=new ArrayList<>();
        int dem=0;
        while(t-->0){
            dem++;
            String ma=String.format("HS%02d",dem);
            String ten=sc.nextLine().trim();
            double dtb=Double.parseDouble(sc.nextLine().trim());
            XepHang xh=new XepHang(ma, ten, dtb);
            ds.add(xh);
        }
        ArrayList<XepHang> sorted=new ArrayList<>(ds);
        Collections.sort(sorted,(a,b) -> Double.compare(b.getdtb(),a.getdtb()));
        int hang=1;
        for(int i=0;i<sorted.size();i++){
            if(i>0&&Double.compare(sorted.get(i).getdtb(), sorted.get(i-1).getdtb())!=0){
                hang=i+1;
            }
            sorted.get(i).Sethang(hang);
        }
        for(XepHang x:ds){
            System.out.println(x);
        }
    }
}
