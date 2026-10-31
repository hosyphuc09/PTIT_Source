import java.util.ArrayList;
import java.util.Scanner;

class TienDien{
    private String ma,loai;
    private int soCu,soMoi;
    public TienDien(String ma,String loai,int soCu,int soMoi){
        this.ma=ma;
        this.loai=loai;
        this.soCu=soCu;
        this.soMoi=soMoi;
    }
    public int HeSo(){
        if(loai.equals("KD")){
            return 3;
        }else if(loai.equals("NN")){
            return 5;
        }else if(loai.equals("TT")){
            return 4;
        }else if(loai.equals("CN")){
            return 2;
        }
        return 0;
    }
    public long ThanhTien(){
        return 1L*(soMoi-soCu)*HeSo()*550;
    }
    public long PhuTroi(){
        int x=soMoi-soCu;
        if(x<50){
            return 0;
        }else if(x>=50 &&x<=100){
            return Math.round(ThanhTien()*35+50)/100;
        }else if(x>100){
            return ThanhTien();
        }
        return 0;
    }
    public long TongTien(){
        return PhuTroi()+ThanhTien();
    }
    @Override 
    public String toString(){
        return ma+" "+HeSo()+" "+ThanhTien()+" "+
        PhuTroi()+" "+TongTien();
    }
}
public class J05050{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<TienDien> ds=new ArrayList<>();
        int dem=0;
        while(t-->0){
            dem++;
            String ma=String.format("KH%02d",dem);
            String loai=sc.nextLine().trim();
            int soCu=Integer.parseInt(sc.nextLine().trim());
            int soMoi=Integer.parseInt(sc.nextLine().trim());
            TienDien td=new TienDien(ma, loai, soCu, soMoi);
            ds.add(td);
        }
        for(TienDien x:ds){
            System.out.println(x);
        }
    }
}