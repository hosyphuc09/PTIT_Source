import java.util.Scanner;

class GiaoVien{
    private String Ma;
    private String hoTen;
    private int luong;
    public GiaoVien(String Ma,String hoTen,int luong){
        this.Ma=Ma;
        this.hoTen=hoTen;
        this.luong=luong;
    }
    public String getMa(){
        return Ma;
    }
    public String gethoTen(){
        return hoTen;
    }
    public int tongLuong(){
        String s=Ma.substring(0,2);
        int bac=Integer.parseInt(Ma.substring(2));
        int phuCap=0;
        if(s.equals("HT")){
            phuCap=2000000;
        }else if(s.equals("HP")){
            phuCap=900000;
        }else if(s.equals("GV")){
            phuCap=500000;
        }
        int tong=luong*bac+phuCap;
        return tong;
    }
}
public class J04015{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        GiaoVien gv=new GiaoVien(sc.nextLine(),sc.nextLine(),sc.nextInt());
        String s=gv.getMa();
        String s1=s.substring(0,2);
        int s2=Integer.parseInt(s.substring(2));
        int luong=0;
        if(s1.equals("HT")){
            luong=2000000;
        }else if(s1.equals("HP")){
            luong=900000;
        }else if(s1.equals("GV")){
            luong=500000;
        }
        System.out.println(
            gv.getMa()+" "+gv.gethoTen()+" "+s2+" "+luong
            +" "+gv.tongLuong()
        );
    }
}