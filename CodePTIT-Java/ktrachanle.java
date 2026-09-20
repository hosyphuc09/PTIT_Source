import java.util.Scanner;

public class ktrachanle {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("moi nhap vao 1 so: ");
            int x=sc.nextInt();
        String traloi=(x%2==0)?"chan":"le";
        System.out.println("so "+x+" la "+traloi);
        System.out.print("moi nhap diem: ");
                int dtb=sc.nextInt();
        String loai=(dtb>=8)?"gioi":((dtb<8&&dtb>=6.5)?"kha":((dtb<6.5&&dtb>=5)?"TB":"yeu"));
        System.out.println("diem "+dtb+" la diem "+loai);
    }
}
