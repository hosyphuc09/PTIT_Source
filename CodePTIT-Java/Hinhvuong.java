import java.util.Scanner;

public class Hinhvuong {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int x1=sc.nextInt();
        int y1=sc.nextInt();
        int x2=sc.nextInt();
        int y2=sc.nextInt();

        int x3=sc.nextInt();
        int y3=sc.nextInt();
        int x4=sc.nextInt();
        int y4=sc.nextInt();
        int cr=Math.max(y2,y4)-Math.min(y1,y3);
        int cc=Math.max(x2,x4)-Math.min(x1,x3);
        int canh=Math.max(cc,cr);
        System.out.print(canh*canh);
    }
}
