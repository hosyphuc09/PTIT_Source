import java.util.Scanner;

class thiSinh{
    private String hoTen;
    private String ngaySinh;
    private double diem1;
    private double diem2;
    private double diem3;
    private double tong;
    public thiSinh(String hoTen,String ngaySinh,double diem1,double diem2,double diem3,double tong){
        this.hoTen=hoTen;
        this.ngaySinh=ngaySinh;
        this.diem1=diem1;
        this.diem2=diem2;
        this.diem3=diem3;
        this.tong=0;
    }
    public String getHoTen(){
        return hoTen;
    }
    public String getNgaySinh(){
        return ngaySinh;
    }
    public double getTong(){
        return (diem1+diem2+diem3);
    }
}
public class J04005{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String hoTen=sc.nextLine();
        String ngaySinh=sc.next();
        double diem1=sc.nextDouble();
        double diem2=sc.nextDouble();
        double diem3=sc.nextDouble();
        double tong=0;
        thiSinh a=new thiSinh(hoTen, ngaySinh, diem1, diem2, diem3, tong);
        System.out.printf("%s %s %.1f",a.getHoTen(),a.getNgaySinh(),a.getTong());
    }
}