import java.util.Scanner;

public class demkitu {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("moi ban nhap1 chuoi ki tu: ");
        String s=sc.nextLine();
        int so=0;
        int hoa=0;
        int thuong=0;
        int space=0;
        for(int i=0;i<s.length();i++){
            char c=s.charAt(i);
            if(Character.isDigit(c)) so++;
            if(Character.isLowerCase(c)) thuong++;
            if(Character.isUpperCase(c)) hoa++;
            if(Character.isWhitespace(c)) space++;
        }
        System.out.println("so luong chu thuong la: "+thuong);
        System.out.println("so luong chu hoa la: "+hoa);
        System.out.println("so luong chu so la: "+so);
        System.out.println("so luong dau cach la: "+space);
    }
}