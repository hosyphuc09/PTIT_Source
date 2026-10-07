import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;
import java.io.File;
import java.io.IOException;
class DanhSach{
    private String Ma;
    private String tenMon;
    private String hinhThuc;
    public DanhSach(String Ma,String tenMon,String hinhThuc){
        this.Ma=Ma;
        this.tenMon=tenMon;
        this.hinhThuc=hinhThuc;
    }
    public String getMa(){
        return Ma;
    }
    public String gettenMon(){
        return tenMon;
    }
    public String gethinhThuc(){
        return hinhThuc;
    }
    @Override 
    public String toString(){
        return Ma+" "+tenMon+" "+hinhThuc;
    }
}
public class J07058{
    public static void main(String[] args) throws IOException {
        Scanner sc=new Scanner(new File("MONHOC.in"));
        int t=sc.nextInt();
        sc.nextLine();
        ArrayList<DanhSach> ds=new ArrayList<>();
        while(t-->0){
            String Ma=sc.nextLine();
            String TenMon=sc.nextLine();
            String hinhThuc=sc.nextLine();
            DanhSach d=new DanhSach(Ma, TenMon, hinhThuc);
            ds.add(d);
        }
        Collections.sort(ds,new Comparator<DanhSach>(){
            @Override 
            public int compare(DanhSach a,DanhSach b){
                return a.getMa().compareTo(b.getMa());
            }
        });
        for(DanhSach x:ds){
            System.out.println(x);
        }
    }
}