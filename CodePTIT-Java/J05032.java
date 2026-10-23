import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class Tuoi{
    private String ten,ngaySinh;
    public Tuoi(String ten,String ngaySinh){
        this.ten=ten;
        this.ngaySinh=ngaySinh;
    }
    public String chuanHoa(){
        String[] a=ngaySinh.split("/");
        return a[2]+a[1]+a[0];
    }
    @Override 
    public String toString(){
        return ten;
    }
}
public class J05032{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<Tuoi> ds=new ArrayList<>();
        while(t-->0){
            String ten=sc.next();
            String ngaySinh=sc.next();
            Tuoi a=new Tuoi(ten, ngaySinh);
            ds.add(a);
        }
        Collections.sort(ds,new Comparator<Tuoi>() {
            @Override 
            public int compare(Tuoi a,Tuoi b){
                return b.chuanHoa().compareTo(a.chuanHoa());
            }
        });
        Tuoi first=ds.get(0);
        Tuoi finish=ds.get(ds.size()-1);
        System.out.println(first);
        System.out.println(finish);
    }
}