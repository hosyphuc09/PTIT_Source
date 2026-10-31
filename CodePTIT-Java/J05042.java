import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class XepHang{
    private String ten;
    private int soBai,submit;
    public XepHang(String ten,int soBai,int submit){
        this.ten=ten;
        this.soBai=soBai;
        this.submit=submit;
    }
    public String getTen(){
        return ten;
    }
    public int getsoBai(){
        return soBai;
    }
    public int getSubmit(){
        return submit;
    }
    @Override 
    public String toString(){
        return ten+" "+soBai+" "+submit;
    }
}
public class J05042{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<XepHang> ds=new ArrayList<>();
        while(t-->0){
            String ten=sc.nextLine().trim();
            int soBai=sc.nextInt();
            int submit=sc.nextInt();
            sc.nextLine();
            XepHang xh=new XepHang(ten, soBai, submit);
            ds.add(xh);
        }
        Collections.sort(ds,new Comparator<XepHang>() {
            @Override 
            public int compare(XepHang a,XepHang b){
                if (a.getsoBai()==b.getsoBai() && a.getSubmit()==b.getSubmit()){
                    return a.getTen().compareTo(b.getTen());
                }else{
                    if(a.getsoBai()!=b.getsoBai()){
                        return Integer.compare(b.getsoBai(), a.getsoBai());
                    }else{
                        return Integer.compare(a.getSubmit(), b.getSubmit());
                    }
                }
            }
        });
        for(XepHang x:ds){
            System.out.println(x);
        }
    }
}