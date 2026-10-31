import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
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
    public long ChietKhau(){
        return  Math.round(1L*donGia*soLuong*PhanTram());
    }
    public long ThanhTien(){
        return (long)soLuong*donGia-ChietKhau();
    }
    public String setMa(){
        String[] a=ten.split(" ");
        return a[0]+" "+a[1];
    }
    public String getMa(){
        return ma;
    }
    @Override 
    public String toString(){
        return ma+" "+ten+" "+ChietKhau()+" "+ThanhTien();
    }
}
public class J05047{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<NhapKho> ds=new ArrayList<>();
        while(t-->0){
            String ten=sc.nextLine().trim();
            int soLuong=Integer.parseInt(sc.nextLine().trim());
            int donGia=Integer.parseInt(sc.nextLine().trim());
            String[] a=ten.split(" ");
            String s1=""+a[0].charAt(0)+Character.toUpperCase(a[1].charAt(0));
            String ss=a[0]+" "+a[1];
            NhapKho nk=null;
            for (NhapKho x:ds){
                if(x.setMa().equals(ss)){
                    nk=x;
                }
            }
            if(nk!=null){
                String s=""+a[0].charAt(0)+Character.toUpperCase(a[1].charAt(0));
                String macu=nk.getMa();
                String dem=""+macu.charAt(2)+macu.charAt(3);
                int dem1=Integer.parseInt(dem)+1;
                String mamoi="";
                if(dem1>=10){
                    mamoi=s+String.valueOf(dem1);
                }else{
                    mamoi=s+"0"+String.valueOf(dem1);
                }
                NhapKho nkm=new NhapKho(mamoi, ten, soLuong, donGia);
                ds.add(nkm);
            }else{
                String mamoi=s1+"01";
                NhapKho nkm=new NhapKho(mamoi, ten, soLuong, donGia);
                ds.add(nkm);
            }
        }
        Collections.sort(ds,new Comparator<NhapKho>() {
            @Override 
            public int compare(NhapKho a,NhapKho b){
                return Long.compare(b.ChietKhau(),a.ChietKhau());
            }
        });
        for(NhapKho x:ds){
            System.out.println(x);
        }
    }
}