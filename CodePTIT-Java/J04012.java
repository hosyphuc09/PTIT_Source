import java.util.Scanner;

class NhanVien{
    private String MaNV;
    private String hoTen;
    private int salary;
    private int ngayCong;
    private String chucVu;
    public NhanVien(){
        MaNV="";
        hoTen="";
        salary=0;
        ngayCong=0;
        chucVu="";
    }
    public NhanVien(String hoTen,int salary,int ngayCong,String chucVu){
        this.hoTen=hoTen;
        this.salary=salary;
        this.ngayCong=ngayCong;
        this.chucVu=chucVu;
    }
    public String getmaNV(){
        return MaNV;
    }
    public String gethoTen(){
        return hoTen;
    }
    public int luongThang(){
        int luong=salary*ngayCong;
        return luong;
    }
    public int thuong(){
        int thuong=0;
        if(ngayCong>=25){
            thuong=luongThang()*20/100;
        }else if(ngayCong>=22&&ngayCong<25){
            thuong=luongThang()*10/100;
        }
        return thuong;
    }
    public int phuCap(){
        int tien=0;
        if(chucVu.equals("GD")){
            tien=250000;
        }else if(chucVu.equals("PGD")){
            tien=200000;
        }else if(chucVu.equals("TP")){
            tien=180000;
        }else if(chucVu.equals("NV")){
            tien=150000;
        }
        return tien;
    }
}
public class J04012{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int dem=0;
        while(sc.hasNext()){
            dem++;
            String MaNV="";
            if(dem>=10){
                MaNV="NV"+String.valueOf(dem);
            }else MaNV="NV0"+String.valueOf(dem);
            NhanVien nv=new NhanVien(sc.nextLine(),sc.nextInt(),sc.nextInt(),sc.next());
            int luongg=nv.luongThang()+nv.thuong()+nv.phuCap();
            System.out.println(
                MaNV+" "+nv.gethoTen()+" "+nv.luongThang()
                +" "+nv.thuong()+" "+nv.phuCap()+" "+luongg
            );
        }
    }
}