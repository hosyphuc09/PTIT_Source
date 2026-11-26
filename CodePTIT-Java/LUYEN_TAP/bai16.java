import java.io.File;
import java.util.LinkedHashMap;
import java.util.*;

public class bai16{
    public static void main(String[] args) throws Exception{
        Scanner sc=new Scanner(new File("DATA.in"));
        int t=Integer.parseInt(sc.nextLine().trim());
        Map<String,Integer> map=new LinkedHashMap<>();
        while(t-->0){
            String s=sc.nextLine();
            String[] a=s.toLowerCase().split("[^a-z0-9]+");
            for(String x :a){
                map.put(x,map.getOrDefault(x, 0)+1);
            }
        }
        for(String x:map.keySet()){
            System.out.println(x+": "+map.get(x));
        }
    }
}