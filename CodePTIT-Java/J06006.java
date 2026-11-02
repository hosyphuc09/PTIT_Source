import java.util.*;

class KhachHang{
    private String ma,ten,gioiTinh,diaChi,ngaySinh;
    public KhachHang(int ma,String ten,String gioiTinh,String ngaySinh,String diaChi){
        this.ma=String.format("KH%03d",ma);
        this.ten=ten;
        this.gioiTinh=gioiTinh;
        this.diaChi=diaChi;
        this.ngaySinh=ngaySinh;
    }
    public String getMa(){
        return ma;
    }
    @Override 
    public String toString(){
        return ten+" "+diaChi;
    }
}
class MatHang{
    private String ma,ten,donVi;
    private long giaMua,giaBan;
    public MatHang(int ma,String ten,String donVi,long giaMua,long giaBan){
        this.ma=String.format("MH%03d",ma);
        this.ten=ten;
        this.donVi=donVi;
        this.giaBan=giaBan;
        this.giaMua=giaMua;
    }
    public String getMa(){
        return ma;
    }
    public long getGiaMua(){
        return giaMua;

    }
    public long getGiaBan(){
        return giaBan;
    }
    @Override 
    public String toString(){
        return ten;
    }
}
class HoaDon{
    private String maHD,maMH,maKH;
    private int soLuong;
    private MatHang mh;
    private KhachHang kh;
    private long loiNhuan;
    public HoaDon(MatHang mh,KhachHang kh,int maHD,int soLuong){
        this.maHD=String.format("HD%03d",maHD);
        this.mh=mh;
        this.kh=kh;
        this.soLuong=soLuong;

    }
    public long getThanhTien(){
        return soLuong*mh.getGiaBan();
    }
    public long getloiNhuan(){
        return soLuong*(mh.getGiaBan()-mh.getGiaMua());
    }
    @Override 
    public String toString(){
        return maHD+" "+kh+" "+mh+" "+soLuong+" "+getThanhTien()+
        " "+getloiNhuan();
    }
}
public class J06006{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=Integer.parseInt(sc.nextLine().trim());
        HashMap<String,KhachHang> dsKH=new HashMap<>();
        for (int i=1;i<=n;i++){
            String ten=sc.nextLine().trim();
            String gioiTinh=sc.nextLine().trim();
            String ngaySinh=sc.nextLine().trim();
            String diaChi=sc.nextLine().trim();
            KhachHang kh=new KhachHang(i, ten, gioiTinh, ngaySinh, diaChi);
            dsKH.put(kh.getMa(), kh);
        }
        HashMap<String,MatHang> dsMH=new HashMap<>();
        int m=Integer.parseInt(sc.nextLine().trim());
        for(int i=1;i<=m;i++){
            String tenMH=sc.nextLine().trim();
            String donVi=sc.nextLine().trim();
            long giaMua=Long.parseLong(sc.nextLine().trim());
            long giaBan=Long.parseLong(sc.nextLine().trim());
            MatHang mh=new MatHang(i, tenMH, donVi, giaMua, giaBan);
            dsMH.put(mh.getMa(), mh);
        }
        int k=Integer.parseInt(sc.nextLine().trim());
        ArrayList<HoaDon> dsHD=new ArrayList<>();
        for(int i=1;i<=k;i++){
            String maKH=sc.next();
            String maMH=sc.next();
            int soLuong=sc.nextInt();
            sc.nextLine();
            KhachHang kh=dsKH.get(maKH);
            MatHang mh=dsMH.get(maMH);
            HoaDon hd=new HoaDon(mh, kh, i, soLuong);
            dsHD.add(hd);
        }
        dsHD.sort((a,b)->Long.compare(b.getloiNhuan(),a.getloiNhuan()));
        for(HoaDon x:dsHD){
            System.out.println(x);
        }
    }
}