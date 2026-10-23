import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class GiangVien{
    private String ma,ten,boMon;
    public GiangVien(String ma,String ten,String boMon){
        this.ma=ma;
        this.ten=ten;
        this.boMon=boMon;
    }
    public String ten(){
        String[] a=ten.split(" ");
        String ten=a[a.length-1];
        return ten;
    }
    public String boMon(){
        String[] a=boMon.split(" ");
        String s="";
        for(int i=0;i<a.length;i++){
            s+=Character.toUpperCase(a[i].charAt(0));
        }
        return s;
    }
    public String getMa(){
        return ma;
    }
    @Override 
    public String toString(){
        return ma+" "+ten+" "+boMon();
    }
}
public class J05025{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<GiangVien> ds=new ArrayList<>();
        int dem=0;
        while(t-->0){
            dem++;
            String ma=String.format("GV%02d",dem);
            String ten=sc.nextLine().trim();
            String boMon=sc.nextLine().trim();
            GiangVien gv=new GiangVien(ma, ten, boMon);
            ds.add(gv);
        }
        Collections.sort(ds,new Comparator<GiangVien>() {
            @Override 
            public int compare(GiangVien a,GiangVien b){
                if(a.ten().equals(b.ten())){
                    return a.getMa().compareTo(b.getMa());
                }else{
                    return a.ten().compareTo(b.ten());
                }
            }
        });
        for(GiangVien x: ds){
            System.out.println(x);
        }
    }
}