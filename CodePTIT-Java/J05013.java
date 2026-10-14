import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class TuyenDung{
    private String ma,ten, xepLoai;
    private double diemll,diemth;
    public TuyenDung(String ma,String ten,double diemll,double diemth){
        this.ten=ten;
        this.diemll=diemll;
        this.diemth=diemth;
        this.ma=ma;
    }
    public double diemtb(){
        double diemtb=(diemll+diemth)/2;
        return  diemtb;
    }
    public String chuanHoa(){
        String xepLoai="";
        double diemtb=(diemll+diemth)/2;
        if(diemtb<5){
            xepLoai="TRUOT";
        }else if(diemtb>=5&&diemtb<8){
            xepLoai="CAN NHAC";
        }else if(diemtb>=8&&diemtb<9.5){
            xepLoai="DAT";
        }else if(diemtb>=9.5){
            xepLoai="XUAT SAC";
        }
        return xepLoai;
    }
    @Override 
    public String toString(){
        return ma+" "+ten+" "+String.format("%.2f",diemtb())+" "+chuanHoa();
    }
}
public class J05013{
    static public double diem(double a){
        
        if(a>10){
           a=a/10;
        }
        return a;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();
        ArrayList<TuyenDung> ds=new ArrayList<>();
        int dem=0;
        while(t-->0){
            dem++;
            String ma=String.format("TS%02d",dem);
            String ten=sc.nextLine();
            double diemll=sc.nextDouble();
            double diemth=sc.nextDouble();
            
            double diemll1=diem(diemll);
            double diemth1=diem(diemth);
            sc.nextLine();
            TuyenDung td=new TuyenDung(ma, ten, diemll1, diemth1);
            ds.add(td);
        }
        Collections.sort(ds,new Comparator<TuyenDung>() {
            @Override 
            public int compare(TuyenDung a,TuyenDung b){
                return Double.compare(b.diemtb(),a.diemtb());
            }
        });
        for(TuyenDung x:ds){
            System.out.println(x);
        }
    }
}