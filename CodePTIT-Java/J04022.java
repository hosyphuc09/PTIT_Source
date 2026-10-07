import java.util.*;
class WordSet{
    private TreeSet<String> set;
    public WordSet(String s){
        set=new TreeSet<>();
        for(String x:s.split("\\s+")){
            x=x.toLowerCase();
            set.add(x);
        }
    }
    public WordSet union(WordSet p){
        WordSet result=new WordSet("");
        result.set.addAll(this.set);
        result.set.addAll(p.set);
        return result;
    }
    public WordSet intersection(WordSet p){
        WordSet result=new WordSet(" ");
        for(String x:this.set){
            if(p.set.contains(x)) result.set.add(x);
        }
        return  result;
    }
    @Override 
    public String toString(){
        StringBuilder sb=new StringBuilder();
        for(String x:set){
            if(sb.length()>0) sb.append(" ");
            sb.append(x);
        }
        return sb.toString();
    }
}
public class J04022{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        WordSet s1 = new WordSet(in.nextLine());
        WordSet s2 = new WordSet(in.nextLine());
        System.out.println(s1.union(s2));
        System.out.println(s1.intersection(s2));
    }
}