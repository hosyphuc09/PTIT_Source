import java.io.File;
import java.util.Scanner;
import java.util.*;

public class J07007 {
    public static void main(String[] args) throws Exception{
        Scanner sc=new Scanner(new File("VANBAN.in"));
        TreeSet<String> set=new TreeSet<>();
        while(sc.hasNext()){
            String s=sc.next();
            s=s.toLowerCase();
            set.add(s);
        }
        for(String x:set){
            System.out.println(x);
        }
    }
}
