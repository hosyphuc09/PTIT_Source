import java.util.Scanner;

class SinhVien{
    private String hoTen;
    private String lop;
    private String ngaySinh;
    private double gpa;
    public SinhVien(){
        hoTen="";
        lop="";
        ngaySinh="";
        gpa=0;
    }
    public SinhVien(String hoTen,String lop,String ngaySinh,double gpa){
        this.hoTen=hoTen;
        this.lop=lop;
        this.ngaySinh=ngaySinh;
        this.gpa=gpa;
    }
    public String gethoTen(){
        return hoTen;
    }
    public String getLop(){
        return lop;
    }
    public double getgpa(){
        return gpa;
    }
}
public class J05004{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();
        int dem=0;
        while(t-->0){
            dem++;
            String hoTen=sc.nextLine();
            String lop=sc.nextLine();
            String ngaySinh=sc.nextLine();
            double gpa=sc.nextDouble();
            sc.nextLine();
            String ma="";
            if(dem>=10){
                ma="B20DCCN0"+String.valueOf(dem);
            }else ma="B20DCCN00"+String.valueOf(dem);
            String[] a=ngaySinh.split("/");
            String m="",d="";
            if(a[0].length()==1){
                d="0"+a[0];
            }else d=a[0];
            if(a[1].length()==1){
                m="0"+a[1];
            }else m=a[1];
            String day=d+"/"+m+"/"+a[2];
            String[] name=hoTen.trim().split("\\s+");
            String newname="";
            for(String s:name){
                String ss=Character.toUpperCase(s.charAt(0))+
                           s.substring(1).toLowerCase();
                if(newname.length()>0){
                    newname+=" ";
                }
                newname+=ss;
            }
            SinhVien sv=new SinhVien(newname,lop,day,gpa);
            System.out.printf("%s %s %s %s %.2f%n",ma,sv.gethoTen(),sv.getLop(),day,sv.getgpa());
        }
    }
}