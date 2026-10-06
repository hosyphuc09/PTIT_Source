import java.util.Scanner;

class PhanSo{
    private long tu;
    private long mau;
    public PhanSo(long tu,long mau){
        this.tu=tu;
        this.mau=mau;
    }
    public long UCLN(long a,long b){
        while(b!=0){
            long temp=a%b;
            a=b;
            b=temp;
        }
        return a;
    }
    public PhanSo tong(PhanSo b){
        long tu1=tu*b.mau+b.tu*mau;
        long mau1=mau*b.mau;
        long usc=UCLN(tu1,mau1);
        return new PhanSo(tu1/usc,mau1/usc);
    }
    public void inPhanSo(){
        System.out.println(tu+"/"+mau);
    }
}
public class J04004{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        long tu1=sc.nextLong();
        long mau1=sc.nextLong();
        long tu2=sc.nextLong();
        long mau2=sc.nextLong();
        PhanSo a=new PhanSo(tu1, mau1);
        PhanSo b=new PhanSo(tu2, mau2);
        PhanSo c;
        c=a.tong(b);
        c.inPhanSo();
    }
}