import java.util.Scanner;

public class tinhtongcacsotrongchuoi {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("moi nhap 1 chuoi: ");
        String s=sc.nextLine();
        int sum=0;
        int count=0;
        String[] ss=s.split(" ");
        for(String s1:ss){
            try{
                int num=Integer.parseInt(s1);
                sum+=num;
                count++;
               // chuyen tring sang int
            }catch (NumberFormatException e){
                //ko lam gi ca
            }
        }
        double tb=(double)sum/count;
        System.out.println(" tong cac so la: "+sum);
        System.out.println(" so luong cac so la: "+count);
        System.out.println("diem trung binh la: "+tb);
    }
}
