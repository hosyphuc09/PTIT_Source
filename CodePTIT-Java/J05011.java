import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;
import java.util.Comparator;

class TinhGio{
    private String ma,ten,gioVao,gioRa;
    public TinhGio(String ma,String ten,String gioVao,String gioRa){
        this.ma=ma;
        this.ten=ten;
        this.gioVao=gioVao;
        this.gioRa=gioRa;
    }
    public String getMa(){
        return ma;
    }
    public String getTen(){
        return ten;
    }
    public int tongPhut(){
        String[] a=gioVao.split(":");
        String[] b=gioRa.split(":");
        int x1=Integer.parseInt(a[0]);
        int y1=Integer.parseInt(a[1]);
        int x2=Integer.parseInt(b[0]);
        int y2=Integer.parseInt(b[1]);
        return (x2*60+y2)-(x1*60+y1);
    }
    public String gio(){
        String[] a=gioVao.split(":");
        String[] b=gioRa.split(":");
        int x1=Integer.parseInt(a[0]);
        int y1=Integer.parseInt(a[1]);
        int x2=Integer.parseInt(b[0]);
        int y2=Integer.parseInt(b[1]);
        int tongphut=x2*60+y2-x1*60-y1;
        int gio=tongphut/60;
        int phut=tongphut%60;
        return gio+" "+"gio"+" "+phut+" "+"phut";
    }
    @Override 
    public String toString(){
        return ma+" "+ten+" "+gio();
    }
}
public class J05011{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();
        ArrayList<TinhGio> ds=new ArrayList<>();
        while(t-->0){
            String ma=sc.nextLine();
            String ten=sc.nextLine();
            String gioVao=sc.nextLine();
            String gioRa=sc.nextLine();
            TinhGio tg=new TinhGio(ma, ten, gioVao, gioRa);
            ds.add(tg);
        }
        Collections.sort(ds,new Comparator<TinhGio>(){
            @Override 
            public int compare(TinhGio a,TinhGio b){
                return Integer.compare(b.tongPhut(),a.tongPhut());
            }
        });
        for(TinhGio x:ds){
            System.out.println(x);
        }
    }
}