import java.util.*;

public class J08011 {
    static boolean check(String s){
        int n=s.length();
        for(int i=0;i<n-1;i++){
            int a=s.charAt(i)-'0';
            int b=s.charAt(i+1)-'0';
            if(b<a) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        LinkedHashMap<String,Integer> map=new LinkedHashMap<>();
        while(sc.hasNext()){
            String s=sc.next();
            if(!check(s)){
                continue;
            }
            map.put(s,map.getOrDefault(s,0 )+1);

        }
        ArrayList<Map.Entry<String,Integer>> list=
                new ArrayList<>(map.entrySet());
                list.sort((a,b)-> Integer.compare(b.getValue(),a.getValue()));
        for(Map.Entry<String,Integer> entry:list){
            System.out.println(entry.getKey()+" "+entry.getValue());
            
        }
    }
}
