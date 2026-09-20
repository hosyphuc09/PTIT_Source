import java.util.*;
public class dayConCoTongLe {
    static ArrayList<Integer> a=new ArrayList<>();
    static ArrayList<Integer> curent=new ArrayList<>();
    static ArrayList<ArrayList<Integer>> result=new ArrayList<>();
    static void Try(int m,int sum){
        if(!curent.isEmpty()&& sum%2==1){
            result.add(new ArrayList<>(curent));
        }
        for(int i=m;i<a.size();i++){
            curent.add(a.get(i));
            Try(i+1,sum+a.get(i));
            curent.remove(curent.size()-1);
        }
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            a.clear();
            curent.clear();
            result.clear();
            for(int i=0;i<n;i++){
                a.add(sc.nextInt());
            }
            Collections.sort(a,Collections.reverseOrder());
            Try(0,0);
            Collections.sort(result,(x,y) ->{
                int len=Math.min(x.size(),y.size());
                for(int i=0;i<len;i++){
                    if(!x.get(i).equals(y.get(i))){
                        return Integer.compare(x.get(i),y.get(i));
                    }
                }
                return Integer.compare(x.size(),y.size());
            });
            for(ArrayList<Integer> x:result){
                for(int c:x){
                    System.out.print(c+" ");
                }
                System.out.println();
            }
        }
    }
}
