import java.util.*;

class MonHoc{
    private String ma,ten;
    public MonHoc(String ma,String ten){
        this.ma=ma;
        this.ten=ten;
    }
    public String getMa(){
        return ma;
    }
    public String getTen(){
        return ten;
    }
}
class GiangVien{
    private String ma,ten;
    public GiangVien(String ma,String ten){
        this.ma=ma;
        this.ten=ten;
    }
    public String getMa(){
        return ma;
    }
    public String getTen(){
        return ten;
    }
}
class HocPhan{
    private String maGV,maMH;
    private float gio;
    private GiangVien gv;
    private MonHoc mh;
    public HocPhan(GiangVien gv,MonHoc mh,float gio){
        this.gio=gio;
        this.gv=gv;
        this.mh=mh;
    }
    @Override 
    public String toString(){
        return gv.getTen()+" "+String.format("%.02f",gio);
    }
}
public class J06007{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        HashMap<String,MonHoc> dsMH=new HashMap<>();
        HashMap<String,GiangVien> dsGV=new HashMap<>();
        int n=Integer.parseInt(sc.nextLine().trim());
        for(int i=1;i<=n;i++){
            String ma=sc.next();
            String ten=sc.nextLine();
            MonHoc mh=new MonHoc(ma, ten);
            dsMH.put(mh.getMa(),mh);
        }
        int m=Integer.parseInt(sc.nextLine().trim());
        for(int i=1;i<=m;i++){
            String maGV=sc.next();
            String tenGV=sc.nextLine();
            GiangVien gv=new GiangVien(maGV, tenGV);
            dsGV.put(gv.getMa(),gv);
        }
        int k=sc.nextInt();
        for(int i=1;i<=k;i++){
            String maGV=sc.next();
            String maMH=sc.next();
            float gio=sc.nextFloat();
            GiangVien gv=dsGV.get(maGV);
            MonHoc mh=dsMH.get(maMH);
            HocPhan hp=new HocPhan(gv, mh, gio);
            System.out.println(hp);
        }
    }
}