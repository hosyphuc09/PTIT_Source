import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class J08010 {
    static boolean check(String s){
        int n=s.length();
        for(int i=0;i<n/2;i++){
            if(s.charAt(i)!=s.charAt(n-i-1)) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        HashMap<String,Integer> map=new HashMap<>();
        ArrayList<String> result=new ArrayList<>();
        int maxLen=0;
        while(sc.hasNext()){
            String s=sc.next();
            int n=s.length();
            if(!check(s)){
                continue;
            }
            map.put(s,map.getOrDefault(s,0)+1);
            if(s.length()>maxLen){
                maxLen=s.length();
                result.clear();
                result.add(s);
            }
            else if(s.length()==maxLen){
                if(!result.contains(s)){
                    result.add(s);
                }
            }
        }
        for(String s: result){
            System.out.println(s+" "+map.get(s));
        }
    }
}
