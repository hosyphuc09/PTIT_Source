import java.util.*;
class KhachHang{
    private String ma,ten,gioiTinh,ngaySinh,diaChi;
    public KhachHang(int ma,String ten,String gioiTinh,String ngaySinh,String diaChi){
        this.ma=String.format("KH%03d",ma);
        this.ten=ten;
        this.gioiTinh=gioiTinh;
        this.diaChi=diaChi;
        String[] a=ngaySinh.split("/");
        if(a[0].length()==1) a[0]="0"+a[0];
        if(a[1].length()==1) a[1]="0"+a[1];
        this.ngaySinh=a[0]+"/"+a[1]+"/"+a[2];
    }
    public String getTen(){
        return ten;
    }
    public String getdiaChi(){
        return diaChi;
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
    public String getTenMH(){
        return ten;
    }
    public String getDonVi(){
        return donVi;
    }
    public long getGiaMua(){
        return giaMua;
    }
    public long getGiaBan(){
        return giaBan;
    }
}
class HoaDon{
    private String maHD;
    private int soLuong;
    private MatHang mh;
    private KhachHang kh;
    public HoaDon(MatHang mh,KhachHang kh,int maHD,int soLuong){
        this.maHD=String.format("HD%03d",maHD);
        this.soLuong=soLuong;
        this.mh=mh;
        this.kh=kh;
    }
    public long getThanhTien(){
        return soLuong*mh.getGiaBan();
    }
    @Override 
    public String toString(){
        return maHD+" "+kh.getTen()+" "+kh.getdiaChi()+" "+mh.getTenMH()+" "+
        mh.getDonVi()+" "+mh.getGiaMua()+" "+mh.getGiaBan()+
        " "+soLuong+" "+getThanhTien();
    }
}
public class J06005{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=Integer.parseInt(sc.nextLine().trim());
        ArrayList<KhachHang> dsKH=new ArrayList<>();
        for(int i=1;i<=n;i++){
            String ten=sc.nextLine().trim();
            String gioiTinh=sc.nextLine().trim();
            String ngaySinh=sc.nextLine().trim();
            String diaChi=sc.nextLine().trim();
            KhachHang kh=new KhachHang(i, ten, gioiTinh, ngaySinh, diaChi);
            dsKH.add(kh);
        }
        int m=Integer.parseInt(sc.nextLine().trim());
        ArrayList<MatHang> dsMH=new ArrayList<>();

        for (int i=1;i<=m;i++){
            String ten=sc.nextLine().trim();
            String donVi=sc.nextLine().trim();
            long giaMua=Long.parseLong(sc.nextLine().trim());
            long giaBan=Long.parseLong(sc.nextLine().trim());
            MatHang mh=new MatHang(i, ten, donVi, giaMua, giaBan);
            dsMH.add(mh);
        }
        int k=Integer.parseInt(sc.nextLine().trim());
        for (int i=1;i<=k;i++){
            String maKH=sc.next();
            String maMH=sc.next();
            int soLuong=sc.nextInt();
            sc.nextLine();
            int indexKH=Integer.parseInt(maKH.substring(2))-1;
            int indexMH=Integer.parseInt(maMH.substring(2))-1;
            KhachHang kh=dsKH.get(indexKH);
            MatHang mh=dsMH.get(indexMH);
            HoaDon hd=new HoaDon(mh, kh, i, soLuong);
            System.out.println(hd);
        }
    }
}
