import java.util.Scanner;

class PhanSo{
    private long tu;
    private long mau;
    public PhanSo(long tu,long mau){
        this.tu=tu;
        this.mau=mau;
    }
    public long rutGon(){
        long a=tu;
        long b=mau;
        while(b!=0){
            long temp=a%b;
            a=b;
            b=temp;
        }
        return a;
    }
    public long getTu(){
        return tu/rutGon();
    }
    public long getMau(){
        return mau/rutGon();
    }
}
public class J04003{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        long tu=sc.nextLong();
        long mau=sc.nextLong();
        PhanSo a=new PhanSo(tu, mau);
        System.out.println(a.getTu()+"/"+a.getMau());
    }
}