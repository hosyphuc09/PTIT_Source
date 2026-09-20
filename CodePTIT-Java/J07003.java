import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.Scanner;
import java.io.*;

public class J07003{
    public static void main(String[] arge) throws FileNotFoundException{
        File file=new File("DATA.in");
        Scanner sc=new Scanner(file);
        String s=sc.next();
        while(s.length()>1){
            int k=s.length()/2;
            String s1=s.substring(0,k);
            String s2=s.substring(k);
            BigInteger a=new BigInteger(s1);
            BigInteger b=new BigInteger(s2);
            BigInteger sum=a.add(b);
            System.out.println(sum);
            s=sum.toString();
        
        }
    }
}