import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class dayConCoTongNgto {
    static ArrayList<Integer> a=new ArrayList<>();
    static ArrayList<Integer> curent=new ArrayList<>();
    static ArrayList<ArrayList<Integer>> result=new ArrayList<>();
    static boolean ngto(int n){
        if(n<2) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    static void Try(int m,int sum){
        if(!curent.isEmpty()&& ngto(sum)){
            result.add(new ArrayList<>(curent));
        }
         for(int i=m;i<a.size();i++){
            curent.add(a.get(i));
            Try(i+1,sum+a.get(i));
            curent.remove(curent.size()-1);
        }
        
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            a.clear();
            curent.clear();
            result.clear();
            int n=sc.nextInt();
           for(int i=0;i<n;i++){
            int x=sc.nextInt();
            a.add(x);
           }
           Collections.sort(a,Collections.reverseOrder());
           Try(0,0);
           Collections.sort(result,(x, y) -> {
            int len=Math.min(x.size(),y.size());
            for(int i=0;i<len;i++){
                if(!x.get(i).equals(y.get(i))){
                    return Integer.compare(x.get(i),y.get(i));
                }
            }
            return Integer.compare(x.size(),y.size());
           });
           for(ArrayList<Integer> xx: result){
            for(int c:xx){
                System.out.print(c+" ");
            }
            System.out.println();
           }
        }
    }
}
