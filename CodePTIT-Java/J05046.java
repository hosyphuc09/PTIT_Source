import java.util.ArrayList;
import java.util.Scanner;

class NhapKho{
    private String ma,ten;
    private int soLuong,donGia;
    public NhapKho(String ma,String ten,int soLuong,int donGia){
        this.ma=ma;
        this.ten=ten;
        this.soLuong=soLuong;
        this.donGia=donGia;
    }
    public double PhanTram(){
        if(soLuong>10){
            return 0.05;
        }else if(soLuong>=8){
            return 0.02;
        }else if(soLuong>=5){
            return 0.01;
        }else{
            return 0;
        }
    }
    public String getMa(){
        return ma;
    }
    public long ChietKhau(){
        return Math.round(1L*donGia*soLuong*PhanTram());
    }
    public long ThanhTien(){
        return (long) soLuong*donGia-ChietKhau();
    }
    public String TenHang(){
        String[] a=ten.split(" ");
        String s=a[0]+" "+a[1];
        return  s;
    }
    @Override 
    public String toString(){
        return ma+" "+ten+" "+ChietKhau()+" "+ThanhTien();
    }
}
public class J05046{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<NhapKho> ds=new ArrayList<>();
        while(t-->0){
            String ten=sc.nextLine().trim();
            int soLuong=Integer.parseInt(sc.nextLine().trim());
            int donGia=Integer.parseInt(sc.nextLine().trim());
            String[] a=ten.split(" ");
            String s=""+a[0].charAt(0)+Character.toUpperCase(a[1].charAt(0));
            String ss=a[0]+" "+a[1];
            NhapKho nk=null;
            for (NhapKho x:ds){
                if(ss.equals(x.TenHang())){
                    nk=x;
                    
                }
            }
            if(nk!=null){
                String ma=nk.getMa();
                String stt=String.valueOf(ma.charAt(2))+ma.charAt(3);
                int dem=Integer.parseInt(stt)+1;
                String Tenma=String.valueOf(ma.charAt(0))+ma.charAt(1);
                String mamoi="";
                if(dem<10){
                    mamoi=Tenma+"0"+String.valueOf(dem);
                }else{
                    mamoi=Tenma+String.valueOf(dem);
                }
                NhapKho nkm=new NhapKho(mamoi, ten, soLuong, donGia);
                ds.add(nkm);
            }else{
                String ma=s+"01";
                NhapKho nkm=new NhapKho(ma, ten, soLuong, donGia);
                ds.add(nkm);
            }
        }
        for (NhapKho x:ds){
            System.out.println(x);
        }
    }
}