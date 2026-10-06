import java.util.Scanner;

class sinhVien{
    private String maSV;
    private String hoTen;
    private String lop;
    private String ngaySinh;
    private float GPA;
    public sinhVien(){
        maSV="";
        hoTen="";
        lop="";
        ngaySinh="";
        GPA=0;
    }
    public sinhVien(String maSV,String hoTen,String lop,String ngaySinh,float GPA){
        this.maSV=maSV;
        this.hoTen=hoTen;
        this.lop=lop;
        this.ngaySinh=ngaySinh;
        this.GPA=GPA;
    }
    public String gethoTen(){
        return hoTen;
    }
    public String getmaSV(){
        return maSV;
    }
    public String getLop(){
        return lop;
    }
    public float getGPA(){
        return GPA;
    }
    public String getngaySinh(){
        return ngaySinh;
    }
}
public class J04006{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String hoTen=sc.nextLine();
        String maSV="B20DCCN001";
        String lop=sc.next();
        String ngaySinh=sc.next();
        float GPA=sc.nextFloat();
        String[] a=ngaySinh.split("/");
        ngaySinh=String.format("%02d/%02d/%s",
                Integer.parseInt(a[0]),Integer.parseInt(a[1]),a[2]
        );
        sinhVien sv=new sinhVien( maSV,hoTen,lop,ngaySinh,GPA);
        System.out.printf("%s %s %s %s %.2f",sv.getmaSV(),sv.gethoTen()
                            ,sv.getLop(),sv.getngaySinh(),sv.getGPA());
    }
}