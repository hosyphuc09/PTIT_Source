import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class NhapXuat{
    private String ma;
    private int soLuong;
    public NhapXuat(String ma,int soLuong){
        this.ma=ma;
        this.soLuong=soLuong;
    }
    public long LuongXuat(){
        if(ma.charAt(0)=='A'){
            return (long)Math.round(soLuong*0.6);
        }else{
            return (long)Math.round(soLuong*0.7);
        }
    }
    public long DonGia(){
        if(ma.charAt(4)=='Y'){
            return 110000;
        }else{
            return 135000;
        }
    }
    public long Tien(){
        return DonGia()*LuongXuat();
    }
    public long Thue(){
        char x=ma.charAt(0);
        char y=ma.charAt(4);
        if(x=='A'&& y=='Y'){
            return Math.round(Tien()*0.08);
        }else if(x=='A'&& y=='N'){
            return Math.round(Tien()*0.11);
        }else if(x=='B'&& y=='Y'){
            return Math.round(Tien()*0.17);
        }else if(x=='B'&& y=='N'){
            return Math.round(Tien()*0.22);
        }
        return 0;
    }
    public char setMa(){
        return ma.charAt(0);
    }
    @Override 
    public String toString(){
        return ma+" "+soLuong+" "+LuongXuat()+" "+DonGia()+" "+
        Tien()+" "+Thue();
    }
}
public class J05049{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<NhapXuat> ds=new ArrayList<>();
        while(t-->0){
            String ma=sc.nextLine().trim();
            int soLuong=Integer.parseInt(sc.nextLine().trim());
            NhapXuat nx=new NhapXuat(ma, soLuong);
            ds.add(nx);
        }
        Collections.sort(ds,new Comparator<NhapXuat>() {
            @Override 
            public int compare(NhapXuat a,NhapXuat b){
                return Long.compare(b.Thue(), a.Thue());
            }
        });
        while(sc.hasNext()){
            String s=sc.nextLine().trim();
            for(NhapXuat x:ds){
                if(x.setMa()==s.charAt(0)){
                    System.out.println(x);
                }
            }
        }
    }
}