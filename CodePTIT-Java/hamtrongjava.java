import java.util.Scanner;

public class hamtrongjava {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
   /*      System.out.print("moi nhap 3 so: ");
        int x=sc.nextInt();
        int y=sc.nextInt();
        int z=sc.nextInt();
        int kq=cong(x, y, z);
        System.out.println("tong 3 so la: "+kq);
        System.out.print("moi nhap gioi tinh: ");
        String gioitinh=new Scanner(System.in).nextLine();
        in(gioitinh);
    }
    public static int cong(int x,int y,int z){
        return x+y+z;
    }
    public static void in(String traloi){
        if(traloi.equals("femal")){
            System.out.println("ban la nu");
        }else{
            System.out.println("ban la nam");
        } */
       System.out.print("moi nhap 3 so: ");
         int x=sc.nextInt();
         int y=sc.nextInt();
         int z=sc.nextInt();
         ptb2(x,y,z);
}
     public static void ptb2(int a,int b,int c){
            int denta=b*b-4*a*c;
            if(denta<0){
                System.out.println("pt bac 2 vo nghiem");

            }else if(denta==0)
            {
                int x1=-b/(2*a);
                System.out.println("pt co nghiem kep x1=x2=: "+x1);
            }else{
                double x1=(-b+Math.sqrt(denta)/(2*a));
                double x2=((-b-Math.sqrt(denta)/(2*a)));
                System.out.println("pt bac 2 co 2 nghiem: x1= "+x1+" ,x2= "+x2);

            }

         
    }
}
