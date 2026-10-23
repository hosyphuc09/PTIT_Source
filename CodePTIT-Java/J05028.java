import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class DoanhNghiep{
    private String ma,ten;
    private int soLuong;
    public DoanhNghiep(String ma,String ten,int soLuong){
        this.ma=ma;
        this.ten=ten;
        this.soLuong=soLuong;
    }
    public int getSoluong(){
        return soLuong;
    }
    public String getMa(){
        return  ma;
    }
    @Override 
    public String toString(){
        return ma+" "+ten+" "+soLuong;
    }
}
public class J05028{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<DoanhNghiep> ds=new ArrayList<>();
        while (t-->0){
            String ma=sc.nextLine().trim();
            String ten=sc.nextLine().trim();
            int soLuong=Integer.parseInt(sc.nextLine().trim());
            DoanhNghiep dn=new DoanhNghiep(ma, ten, soLuong);
            ds.add(dn);
        }
        Collections.sort(ds,new Comparator<DoanhNghiep>() {
            @Override 
            public int compare(DoanhNghiep a,DoanhNghiep b){
                if (a.getSoluong()!=b.getSoluong()){
                    return Integer.compare(b.getSoluong(), a.getSoluong());
                }else{
                    return a.getMa().compareTo(b.getMa());
                }
            }
        });
        for (DoanhNghiep x: ds){
            System.out.println(x);
        }
    }
}