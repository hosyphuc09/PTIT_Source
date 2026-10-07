import java.util.*;

class IntSet{
    private TreeSet<Integer> set;
    public IntSet(int[] a){
        set=new TreeSet<>();
        for(int x:a){
            set.add(x);
        }
    }
    public IntSet union(IntSet p){
        IntSet result=new IntSet(new int[0]);
        result.set.addAll(this.set);
        result.set.addAll(p.set);
        return result;
    }
    @Override 
    public String toString(){
        StringBuilder sb=new StringBuilder();
        for(int x:set){
            if(sb.length()>0){
                sb.append(" ");
            }
            sb.append(x);
        }
        return sb.toString();
    }
}
public class J04021{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m = sc.nextInt(), a[] = new int[n], b[] = new int[m];
        for(int i = 0; i<n; i++) a[i] = sc.nextInt();
        for(int i = 0; i<m; i++) b[i] = sc.nextInt();
        IntSet s1 = new IntSet(a);
        IntSet s2 = new IntSet(b);
        IntSet s3 = s1.union(s2);
        System.out.println(s3);
    }
}