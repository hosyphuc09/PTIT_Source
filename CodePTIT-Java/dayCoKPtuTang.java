import java.util.*;
public class dayCoKPtuTang{
    static int n,k;
    static int[] a=new int[100];
    static ArrayList<Integer> b=new ArrayList<>();
    static void Try(int m){
        for(int i=m;i<=n-(k-b.size());i++){
            b.add(a[i]);
            if(b.size()==k){
                in();
            }else Try(i+1);
            b.remove(b.size()-1);
        }
    }
    static void in(){
       
           for(int x:b){
            System.out.print(x+" ");
           }
           System.out.println();
        
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            b.clear();
            n=sc.nextInt();
            k=sc.nextInt();
            for(int i=0;i<n;i++){
                a[i]=sc.nextInt();
            }
            Arrays.sort(a,0,n);
            Try(0);
        }
    }
}