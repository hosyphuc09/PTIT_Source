import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

class DT{
    private String ma,ten;
    private long gia;
    public DT(String ma,String ten,long gia){
        this.ma=ma;
        this.ten=ten;
        this.gia=gia;
    }
    public String getMa(){
        return ma;
    }
    public String getTen(){
        return ten;
    }
    public long getGia(){
        return gia;
    }
}
class CuocGoi{
    private String maThue,tgDen,tgDi;
    private DT dt;
    public CuocGoi(String maThue,String tgDen,String tgDi,DT dt){
        this.maThue=maThue;
        this.tgDen=tgDen;
        this.tgDi=tgDi;
        this.dt=dt;
    }
    public int phut(){
        String[] a=tgDen.split(":");
        String[] b=tgDi.split(":");
        int phutDen=Integer.parseInt(a[0])*60+Integer.parseInt(a[1]);
        int phutDi=Integer.parseInt(b[0])*60+Integer.parseInt(b[1]);
        int tong=phutDi-phutDen;
        if(maThue.charAt(0)!='0'){
            return (int)Math.ceil(tong/3.0);
        }
        return tong;
    }
    public long Gia(){
        if(maThue.charAt(0)!='0'){
            return phut()*800;
        }
        return phut()*dt.getGia();
    }
    @Override 
    public String toString(){
        String ten="";
        if(dt==null){
            ten="Noi mang";
        }else{
            ten=dt.getTen();
        }
        return maThue+" "+ten+" "+phut()+" "+Gia();
    }
}
public class J05072{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<DT> dsDT=new ArrayList<>();
        ArrayList<CuocGoi> dsCG=new ArrayList<>();
        while(t-->0){
            String ma=sc.nextLine().trim();
            String ten=sc.nextLine().trim();
            long gia=Long.parseLong(sc.nextLine().trim());
            DT dt=new DT(ma, ten, gia);
            dsDT.add(dt);
        }
        int k=Integer.parseInt(sc.nextLine().trim());
        for(int i=0;i<k;i++){
            String maThue=sc.next();
            String tgDen=sc.next();
            String tgDi=sc.nextLine().trim();
            DT dt=null;
            if(maThue.charAt(0)=='0'){
                String ma1=maThue.substring(1,3);
                for(DT x:dsDT){
                    if(x.getMa().equals(ma1)){
                        dt=x;
                    }
                }
            }
            CuocGoi cg=new CuocGoi(maThue, tgDen, tgDi, dt);
            dsCG.add(cg);
        }
        Collections.sort(dsCG,(a,b)->Long.compare(b.Gia(),a.Gia()));
        for(CuocGoi x:dsCG){
            System.out.println(x);
        }
    }
}