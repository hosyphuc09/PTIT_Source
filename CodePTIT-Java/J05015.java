import java.util.ArrayList;
import java.util.Scanner;
import java.util.Collections;
import java.util.Comparator;

class XeDap{
    private String ten,donVi,denDich;
    public XeDap(String ten,String donVi,String denDich){
        this.ten=ten;
        this.donVi=donVi;
        this.denDich=denDich;
    }
    public int thoiGianDen() {
    String[] a = denDich.split(":");
    int gio = Integer.parseInt(a[0]);
    int phut = Integer.parseInt(a[1]);

    return gio * 60 + phut;
}
    public String Ma() {
    String[] a = donVi.trim().split("\\s+");
    String[] b = ten.trim().split("\\s+");

    StringBuilder s = new StringBuilder();

    for (String x : a) {
        s.append(x.charAt(0));
    }

    for (String x : b) {
        s.append(x.charAt(0));
    }

    return s.toString();
}
    public int tocDo(){
        String[] a=denDich.split(":");
        int gioDen=Integer.parseInt(a[0]);
        int phutDen=Integer.parseInt(a[1]);
        double gioDi=(gioDen-6)+phutDen /60.0;
        int tocdo=(int)Math.round(120/gioDi);
        
        return tocdo;
    }
    @Override 
    public String toString(){
        return Ma()+" "+ten+" "+donVi+" "+tocDo()+" Km/h";
    }
}
public class J05015{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();
        ArrayList<XeDap> ds=new ArrayList<>();
        while(t-->0){
            String ten=sc.nextLine();
            String donVi=sc.nextLine();
            String denDich=sc.nextLine();
            XeDap xd=new XeDap(ten, donVi, denDich);
            ds.add(xd);
        }
        Collections.sort(ds, new Comparator<XeDap>() {
    @Override
    public int compare(XeDap a, XeDap b) {
        return Integer.compare(a.thoiGianDen(), b.thoiGianDen());
    }
});
        for(XeDap x:ds){
            System.out.println(x);
        }
    }
}