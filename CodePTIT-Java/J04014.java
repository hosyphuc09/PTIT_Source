import java.util.Scanner;

class PhanSo{
    private long x;
    private long y;
    public PhanSo(long x,long y){
        if(y<0){
            x=-x;
            y=-y;
        }
        this.x=x;
        this.y=y;
    }
    public long getX(){
        return x;
    }
    public long getY(){
        return y;
    }
    public long usc(long a,long b){
        a=Math.abs(a);
        b=Math.abs(b);
        while(b!=0){
            long temp=a%b;
            a=b;
            b=temp;
        }
        return a;
    }
    public PhanSo tong(PhanSo p){
        long tu=this.x*p.y+p.x*this.y;
        long mau=this.y*p.y;
        long USC=usc(tu,mau);
        long x=tu/USC;
        long y=mau/USC;
        return new PhanSo(x*x,y*y);
    }

    public PhanSo tich(PhanSo p1,PhanSo p2){
        long tu=this.x*p1.x*p2.x;
        long mau=this.y*p2.y*p1.y;
        return new PhanSo(tu/usc(tu,mau),mau/usc(tu,mau));
    }
    public void inPhanSoC(){
        System.out.print(x+"/"+y+" ");
    }
    public void inPhanSoD(){
        System.out.println(x+"/"+y);
    }
}
public class J04014{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            long x1=sc.nextInt();
            long y1=sc.nextInt();
            long x2=sc.nextInt();
            long y2=sc.nextInt();
            PhanSo p1=new PhanSo(x1,y1);
            PhanSo p2=new PhanSo(x2, y2);
            PhanSo c;
            c=p1.tong(p2);
            c.inPhanSoC();
            PhanSo d;
            d=c.tich(p1,p2);
            d.inPhanSoD();
        }
    }
}