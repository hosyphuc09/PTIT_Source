import java.util.Scanner;

public class dayConLienTiepTongK {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            
            int n=sc.nextInt();
            long k=sc.nextLong();
            int[] a=new int[n];
            for(int i=0;i<n;i++){
                a[i]=sc.nextInt();
            }
            long sum=0;
             boolean f=false;
            int left=0;
            for(int right=0;right<n;right++){
               
                sum+=a[right];
                while(sum>k){
                    sum-=a[left];
                    left++;
                }
                if(sum==k && left<=right){
                    f=true;
                    
                    break;
                }
            }
            if(!f){
                System.out.println("NO");
            }else System.out.println("YES");
        }
    }
}
