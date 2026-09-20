import java.util.Scanner;

public class demtu {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("moi nhap 1 chuoi: ");
        String input=sc.nextLine();
        System.out.println("moi nhap tu can dem: ");
        String tu=sc.nextLine();
        // tach chuoi
        String[] arr=input.split(" ");
        int count=0;
        for(String c:arr){

            if(c.equals(tu)){
                count++;
            }
        }
        System.out.println("so lan xuat hien la: "+count);
    }
}
