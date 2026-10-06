import java.util.*;

public class J08015{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
       
        int t=sc.nextInt();
        while(t-->0){
            HashMap<Integer,Integer> map=new HashMap<>();
            int n=sc.nextInt();
            int k=sc.nextInt();
            long dem=0;
            for(int i=0;i<n;i++){
                int x=sc.nextInt();
                int hieu=k-x;
                if(map.containsKey(hieu)){
                    dem+=map.get(hieu);
                }
                map.put(x,map.getOrDefault(x,0)+1);

            }
            System.out.println(dem);
        }
    }
}