import java.util.Scanner;

public class Char_java {
    public static void main(String[] args) {
        char ch='x'; //khoi tao
        char ch2=66;
        // System.out.println(ch2);
        char ch3; //khai bao
        System.out.print("moi nhap vao 1 ky tu: ");
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        char ch4=s.charAt(0);
        System.out.println("ky tu vua nhap la: "+ch4);
        System.out.print("moi nhap 2 ky tu: ");
        char ch5=s.charAt(1);
        char ch6=s.charAt(2);
        System.out.println(Character.compare(ch5,ch6));
        char ch11='1';
        char ch12='a';
        char ch13='A';
        char ch14=' '; 
        System.out.println(Character.isDigit(ch11));
        System.out.println(Character.isDigit(ch12));
        System.out.println(Character.isLetter(ch12));
        System.out.println(Character.isLowerCase(ch13));
        System.out.println(Character.isWhitespace(ch14));

    }
}
