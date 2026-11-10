import java.util.ArrayList;
import java.util.Scanner;

class CuocDT{
    private String ma,ten;
    private long gia;
    public CuocDT(String ma,String ten,long gia){
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
    public long Gia(){
        return gia;
    }
}
class CuocGoi{
    private String maThue,tgDen,tgDi;
    private CuocDT cu;
    public CuocGoi(String maThue,String tgDen,String tgDi, CuocDT cu){
        this.maThue=maThue;
        this.tgDen=tgDen;
        this.tgDi=tgDi;
        this.cu=cu;
    }
    public int phut(){
        String[] a=tgDen.split(":");
        int phutDen=Integer.parseInt(a[0])*60+Integer.parseInt(a[1]);
        String[] b=tgDi.split(":");
        int phutDi=Integer.parseInt(b[0])*60+Integer.parseInt(b[1]);
        int tong=phutDi-phutDen;
        if(maThue.charAt(0)!='0'){
            return (int)Math.ceil(tong/3.0);
        }
        return phutDi-phutDen;
    }
    public long GiaCuoc(){
        if(maThue.charAt(0)!='0'){
            
            return phut()*800;
        }
        return phut()*cu.Gia();
    }
    @Override 
    public String toString(){
        String ten="";
        if(cu==null){
            ten="Noi mang";
        }else{
            ten=cu.getTen();
        }
        return maThue+" "+ten+" "+phut()+" "+GiaCuoc();
    }
}
public class J05071{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine().trim());
        ArrayList<CuocDT> ds=new ArrayList<>();
        while(t-->0){
            String ma=sc.nextLine().trim();
            String ten=sc.nextLine().trim();
            long gia=Long.parseLong(sc.nextLine().trim());
            CuocDT cu=new CuocDT(ma, ten, gia);
            ds.add(cu);

        }
        int k=Integer.parseInt(sc.nextLine().trim());
        for(int i=0;i<k;i++){
            String maThue=sc.next();
            String tgDen=sc.next();
            String tgDi=sc.nextLine().trim();
            CuocDT cu=null;
            if(maThue.charAt(0)=='0'){
            String ma1=maThue.substring(1,3);
            for(CuocDT x:ds){
                if(x.getMa().equals(ma1)){
                    cu=x;
                    break;
                }
            }}
            CuocGoi cg=new CuocGoi(maThue, tgDen, tgDi, cu);
            System.out.println(cg);
        }
    }
}