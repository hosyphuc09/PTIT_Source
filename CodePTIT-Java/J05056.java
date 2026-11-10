import java.net.Inet4Address;
import java.util.ArrayList;
import java.util.Collections;
import java.util.*;

class VDV{
    private String ma,ten,ngaySinh,xuatPhat,denDich;
    private int hang;
    public VDV(int ma,String ten,String ngaySinh,String xuatPhat,String denDich){
        this.ma=String.format("VDV%02d",ma);
        this.ten=ten;
        this.ngaySinh=ngaySinh;
        this.xuatPhat=xuatPhat;
        this.denDich=denDich;
    }
    public String chuanHoa(int n){
        int gio=n/3600;
        int phut=(n%3600)/60;
        int giay=n%60;
        String gio1=String.format("%02d",gio);
        String phut1=String.format("%02d",phut);
        String giay1=String.format("%02d",giay);
        return gio1+":"+phut1+":"+giay1;
    }
    public int ThanhTichThucTe(){
        String[] a=xuatPhat.split(":");
        int tgDi=Integer.parseInt(a[0])*3600+Integer.parseInt(a[1])
        *60+Integer.parseInt(a[2]);
        String[] b=denDich.split(":");
        int tgDen=Integer.parseInt(b[0])*3600+Integer.parseInt(b[1])
        *60+Integer.parseInt(b[2]);
        return tgDen-tgDi;
    }
    public int UuTien(){
        String[] a=ngaySinh.split("/");
        int tuoi=2021-Integer.parseInt(a[2]);
        int diem=0;
        if(tuoi>=18 && tuoi<25){
            diem=1;
        }else if(tuoi>=25 && tuoi<=32){
            diem=2;
        }else if(tuoi>32){
            diem=3;
        }else{
            diem=0;
        }
        return diem;
    }
    public void SetHang(int hang){
        this.hang=hang;
    }
    public int getHang(){
        return hang;
    }
    public int ThanhTichXepHang(){
        return ThanhTichThucTe()-UuTien();
    }
    @Override 
    public String toString(){
        return ma+" "+ten+" "+chuanHoa(ThanhTichThucTe())+" "+
        chuanHoa(UuTien())+" "+chuanHoa(ThanhTichXepHang())+
        " "+hang;
    }
}
public class J05056{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<VDV> ds=new ArrayList<>();
        int dem=0;
        while(t-->0){
            dem++;
            String ten=sc.nextLine().trim();
            String ngaySinh=sc.nextLine().trim();
            String xuatPhat=sc.nextLine().trim();
            String denDich=sc.nextLine().trim();
            VDV vd=new VDV(dem, ten, ngaySinh, xuatPhat, denDich);
            ds.add(vd);
        }
        int hang=1;
        ArrayList<VDV> sorted=new ArrayList<>(ds);
        Collections.sort(sorted,(a,b)->Integer.compare(a.ThanhTichXepHang(),b.ThanhTichXepHang()));
        for(int i=0;i<sorted.size();i++){
            if(i>0 && Integer.compare(sorted.get(i).ThanhTichXepHang(),sorted.get(i-1).ThanhTichXepHang())!=0){
                hang=i+1;
            }
            sorted.get(i).SetHang(hang);
        }
        Collections.sort(ds,(a,b)->Integer.compare(a.getHang(),b.getHang()));
        for(VDV x:ds){
            System.out.println(x);
        }
    }
}