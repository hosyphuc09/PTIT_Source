import java.util.Scanner;
import java.io.*;

public class J07001 {
    public static void main(String[] args)  throws Exception{
        Scanner sc=new Scanner(new File("DATA.in"));
        while(sc.hasNext()){
            String s=sc.nextLine();
            System.out.println(s);
        }
    }
}
