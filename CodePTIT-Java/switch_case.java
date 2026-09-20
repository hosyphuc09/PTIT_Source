import java.util.Scanner;

public class switch_case {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("moi bam de chon: ");
        int x=sc.nextInt();
        switch(x){
            case 1:
                System.out.println("tim theo ten");
                break;
            case 2:
                System.out.println("tim theo tac gia");
                break;
            case 3:
                System.out.println("tim theo nha xuat ban");
                break;
            case 4:
                System.out.println("tim theo tieu de");
                break;
        }
    }
}
