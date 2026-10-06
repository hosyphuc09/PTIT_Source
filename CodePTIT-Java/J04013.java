import java.util.Scanner;

class TuyenSinh{
    private String MaTS;
    private String hoTen;
    private double diemToan;
    private double diemHoa;
    private double diemLy;
    public TuyenSinh(){
        MaTS="";
        hoTen="";
        diemToan=0;
        diemLy=0;
        diemHoa=0;
    }
    public TuyenSinh(String MaTS,String hoTen,double diemToan,double diemLy,double diemHoa){
        this.MaTS=MaTS;
        this.hoTen=hoTen;
        this.diemToan=diemToan;
        this.diemLy=diemLy;
        this.diemHoa=diemHoa;
    }
    public String getMaTS(){
        return MaTS;
    }
    public String gethoTen(){
        return hoTen;
    }
    public String khuVuc(){
        String s=MaTS.substring(0,3);
        return s;
    }
    public double tongDiem(){
        double tong=diemToan*2+diemLy+diemHoa;
        return tong;
    }
}
public class J04013{
    static public String format(double x){
    if(x==(int)x){
        return String.valueOf((int)x);
    }
    return String.valueOf(x);
}
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        TuyenSinh ts=new TuyenSinh(sc.nextLine(),sc.nextLine(),sc.nextDouble(),sc.nextDouble(),sc.nextDouble());
        double tong=ts.tongDiem();
        String tt="";
        double kv=0;
        String kvv=ts.khuVuc();
        if(kvv.equals("KV1")){
            kv=0.5;
            tong=tong+kv;
        }else if(kvv.equals("KV2")){
            kv=1;
            tong=tong+kv;
        }else if(kvv.equals("KV3")){
            kv=2.5;
            tong=tong+kv;
        }
        if(tong>=24){
            tt="TRUNG TUYEN";
        }else tt="TRUOT";
        System.out.println(
            ts.getMaTS()+" "+ts.gethoTen()+" "
            +format(kv)+" "+format(ts.tongDiem())+" "+tt
        );
    }
}