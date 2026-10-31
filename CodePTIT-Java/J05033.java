import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;
import java.util.Collections;

class ThoiGian{
    private int gio,phut,giay;
    public ThoiGian(int gio,int phut,int giay){
        this.gio=gio;
        this.phut=phut;
        this.giay=giay;
    }
    public int tong(){
        return gio*3600+phut*60+giay;
    }
    @Override 
    public String toString(){
        return gio+" "+phut+" "+giay;
    }
}
public class J05033{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<ThoiGian> ds=new ArrayList<>();
        while(t-->0){
            int gio=sc.nextInt();
            int phut=sc.nextInt();
            int giay=sc.nextInt();
            ThoiGian tg=new ThoiGian(gio, phut, giay);
            ds.add(tg);
        }
        Collections.sort(ds,new Comparator<ThoiGian>() {
            @Override 
            public int compare(ThoiGian a,ThoiGian b){
                return Integer.compare(a.tong(),b.tong());
            }
        });
        for(ThoiGian x: ds){
            System.out.println(x);
        }
    }
}