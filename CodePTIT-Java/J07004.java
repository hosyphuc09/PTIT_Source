import java.util.Scanner;
import java.util.TreeMap;
import java.io.*;

public class J07004 {
    public static void main(String[] args) throws Exception{
        Scanner sc=new Scanner(new File("DATA.in"));
        TreeMap<Integer,Integer> map=new TreeMap<>();
        while(sc.hasNext()){
            int a=sc.nextInt();
            map.put(a,map.getOrDefault(a,0)+1);
        }
        for(int x:map.keySet()){
            System.out.println(x+" "+map.get(x));
        }
    }
}
