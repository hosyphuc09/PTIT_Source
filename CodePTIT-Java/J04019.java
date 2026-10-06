import java.util.Scanner;

class Pair<T,U>{
    private T first;
    private U second;
    public Pair(T first, U second){
        this.first=first;
        this.second=second;
    }
    public boolean isPrime(){
        int a=(Integer) first;
        int b=(Integer) second;
        return checkPrime(a)&&checkPrime(b);
    }
    private boolean checkPrime(int x){
        if(x<2) return false;
        for(int i=2;i*i<=x;i++){
            if(x%i==0) return false;
        }
        return true;
    }
    @Override 
    public String toString(){
        return first+" "+second;
    }
}
public class J04019{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            boolean check = false;
            for(int i = 2; i <= 2*Math.sqrt(n); i++){
                Pair<Integer, Integer> p = new Pair<>(i, n-i);
                if(p.isPrime()){
                    System.out.println(p);
                    check = true;
                    break; 
                }
            }
            if(!check) System.out.println(-1);
        }
    }
}