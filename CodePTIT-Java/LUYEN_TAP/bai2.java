import java.io.File;
import java.util.ArrayList;
import java.util.Scanner;

class SinhVien{
    private String ma,ten;
    private int luong;
    public SinhVien(String ma,String ten,int luong){
        this.ma=ma;
        this.ten=ten;
        this.luong=luong;
    }
    @Override 
    public String toString(){
        return ma+ " "+ten+" "+luong;
    }
}
public class bai2{
    public static void main(String[] args) throws Exception{
        Scanner sc=new Scanner(new File("employees.txt"));
        ArrayList<SinhVien> ds=new ArrayList<>();
        while(sc.hasNextLine()){
            String ma=sc.nextLine().trim();
            String ten=sc.nextLine().trim();
            int luong=sc.nextInt();
            SinhVien sv=new SinhVien(ma, ten, luong);
            ds.add(sv);
        }
    }
}