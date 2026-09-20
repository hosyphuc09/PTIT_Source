import java.util.Scanner;

public class chuoidao {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String path=sc.nextLine();
        String ss=new StringBuilder(path).reverse().toString();
        if(path.equalsIgnoreCase(ss)){
            System.out.println("day la cuoi dao ngc");
        }else System.out.println("day ko phai chuoi dao ngc");
    }
}
