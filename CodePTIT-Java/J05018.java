import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class BangDiem{
    private String ma,ten;
    private double dtb;
    public BangDiem(String ma,String ten,double dtb){
        this.ma=ma;
        this.ten=ten;
        this.dtb=dtb;
    }
    public int xepMa(){
        String s=ma.substring(2);
        int x=Integer.parseInt(s);
        return x;
    }
    public String xepLoai(){
        String loai="";
        if(dtb>=9) loai="XUAT SAC";
        else if(dtb>=8) loai="GIOI";
        else if(dtb>=7) loai="KHA";
        else if(dtb>=5) loai="TB";
        else if(dtb<5) loai="YEU";
        return loai;
    }
    public double getdtb(){
        return dtb;
    }
    @Override 
    public String toString(){
        return ma+" "+ten+" "+String.format("%.01f",dtb)+" "+xepLoai();
    }
}
public class J05018{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        int dem=0;
        ArrayList<BangDiem> ds=new ArrayList<>();
        while(t-->0){
            dem++;
            String ma=String.format("HS%02d",dem);
            String ten=sc.nextLine().trim();
           double diemToan = sc.nextDouble();
double diemViet = sc.nextDouble();
double diemAnh = sc.nextDouble();
double diemLy = sc.nextDouble();
double diemHoa = sc.nextDouble();
double diemSinh = sc.nextDouble();
double diemSu = sc.nextDouble();
double diemDia = sc.nextDouble();
double diemGiao = sc.nextDouble();
double diemNghe = sc.nextDouble();

sc.nextLine(); // Đọc bỏ ký tự xuống dòng còn lại
            double dtb=(diemToan*2+diemViet*2+diemAnh+diemLy+diemHoa
                +diemSinh+diemSu+diemDia+diemGiao+diemNghe)/12;
            dtb=Math.round(dtb*10)/10.0;
            BangDiem bd=new BangDiem(ma, ten, dtb);
            ds.add(bd);
        }
        Collections.sort(ds,new Comparator<BangDiem>() {
            @Override 
            public int compare(BangDiem a,BangDiem b){
                if(a.getdtb()!=b.getdtb()){
                return Double.compare(b.getdtb(),a.getdtb());
                }else{
                    return Integer.compare(a.xepMa(),b.xepMa());
                }
            }
        });
        for(BangDiem x:ds){
            System.out.println(x);
        }
    }
}