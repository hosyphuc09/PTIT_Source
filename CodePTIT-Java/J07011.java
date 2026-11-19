import java.io.File;
import java.util.*;

public class J07011 {
    public static void main(String[] args) throws Exception {
        Scanner sc=new Scanner(new File("VANBAN.in"));
        int t=Integer.parseInt(sc.nextLine());
        TreeMap<String,Integer> map=new TreeMap<>();
        while(t-->0){
            String s=sc.nextLine();
            String[] a = s.split("[\\s,.?!:;()/-]+");
            for( String x:a){
                x=x.toLowerCase();
                map.put(x,map.getOrDefault(x,0)+1);
            }
        }
        List<Map.Entry<String,Integer>> a=new ArrayList<>(map.entrySet());
       
        a.sort((x,y)->{
            int cmp=y.getValue().compareTo(x.getValue());
            if(cmp!=0) return  cmp;
            return x.getKey().compareTo(y.getKey());
        });
        for(Map.Entry<String,Integer> x:a){
            System.out.println(x.getKey()+" "+x.getValue());
        }
    }
}
