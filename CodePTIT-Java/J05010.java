import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class MatHang{
    private String ma,ten,nhom;
    private double giaMua,giaBan;
    public MatHang(String ma,String ten,String nhom,double giaMua,double giaBan){
        this.ma=ma;
        this.ten=ten;
        this.nhom=nhom;
        this.giaMua=giaMua;
        this.giaBan=giaBan;
    }
    public double loiNhuan(){
        double loiNhuan=giaBan-giaMua;
        return loiNhuan;
    }
    @Override 
    public String toString(){
        return ma+" "+ten+" "+nhom+" "+String.format("%.2f",loiNhuan());
    }
}
public class J05010{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();
        int dem=0;
        ArrayList<MatHang> ds=new ArrayList<>();
        while(t-->0){
            dem++;
            String ma=String.valueOf(dem);
            String ten=sc.nextLine();
            String nhom=sc.nextLine();
            double mua=sc.nextDouble();
            double ban=sc.nextDouble();
            sc.nextLine();
            MatHang mh=new MatHang(ma, ten, nhom, mua, ban);
            ds.add(mh);
        }
        Collections.sort(ds,new Comparator<MatHang>() {
            @Override 
            public int compare(MatHang a,MatHang b){
                return Double.compare(b.loiNhuan(), a.loiNhuan());
            }
        });
        for(MatHang x:ds){
            System.out.println(x);
        }
    }
}