
import java.util.*;

class NhanVien{
    private String ma,ten,chucVu;
    public NhanVien(String ma,String ten){
        this.ma=ma;
        this.ten=ten;
    }
    public String SoHieu(){
        String so=ma.substring(4);
        return so;
    }
    public String BacLuong(){
        String bac=ma.substring(2,4);
        return bac;
    }
    public String ChucVu(){
        String chuc=ma.substring(0,2);
        return chuc;
    }
    public void SetChucVu(String s){
        this.chucVu=s;
    }
    public String getChucVu(){
        return chucVu;
    }
    public int getBacLuong(){
        return Integer.parseInt(BacLuong());
    }
    public int getSoHieu(){
        return Integer.parseInt(SoHieu());
    }
    @Override 
    public String toString(){
        return ten+" "+chucVu+" "+SoHieu()+" "+BacLuong();
    }
}
public class J05065{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<NhanVien> ds=new ArrayList<>();
        int gd=0;
        int tp=0;
        int pp=0;
        while(t-->0){
            String ma=sc.next();
            String ten=sc.nextLine().trim();
            String chucVu=ma.substring(0,2);
            NhanVien nv=new NhanVien(ma, ten);
            if(chucVu.equals("GD")){
    if(gd >= 1){
        nv.SetChucVu("NV");
    }else{
        nv.SetChucVu("GD");
        gd++;
    }
}else if(chucVu.equals("TP")){
    if(tp >= 3){
        nv.SetChucVu("NV");
    }else{
        nv.SetChucVu("TP");
        tp++;
    }
}else if(chucVu.equals("PP")){
    if(pp >= 3){
        nv.SetChucVu("NV");
    }else{
        nv.SetChucVu("PP");
        pp++;
    }
}else{
    nv.SetChucVu("NV");
}
            ds.add(nv);
        }
        int k=Integer.parseInt(sc.nextLine().trim());
        while(k-->0){
            String s=sc.nextLine().trim();
            ArrayList<NhanVien> dsm=new ArrayList<>();
            for(NhanVien x:ds){
                if(x.getChucVu().equals(s)){
                    dsm.add(x);
                }
            }
            Collections.sort(dsm,new Comparator<NhanVien>() {
                @Override 
                public int compare(NhanVien a,NhanVien b){
                    if(a.getBacLuong()!=b.getBacLuong()){
                        return Integer.compare(b.getBacLuong(),a.getBacLuong());
                    }else{
                        return Integer.compare(a.getSoHieu(),b.getSoHieu());
                    }
                }
            });
            for(NhanVien q:dsm){
                System.out.println(q);
            }
        }
    }
}