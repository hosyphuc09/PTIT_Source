import java.util.Scanner;

public class catdoi {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
       while(t>0){
        t--;
        long n=sc.nextLong();
        boolean f=false;
        int[] a=new int[20];
        int k=0;
        while(n>0){
            long r=n%10;
            n/=10;
            if(r!=0&&r!=1&&r!=8&&r!=9){
                System.out.println("INVALID");
                f=true;
                break;
            }
            if(r==0||r==8||r==9){
                a[k++]=0;
            }else if(r==1){
                a[k++]=1;
            }
        }
        if(f){
            continue;
        }else{
        long number=0;
        for(int i=k-1;i>=0;i--){
            number=number*10+a[i];
        }
        if(number!=0){
        System.out.println(number);
        }else System.out.println("INVALID");
       }}
    }
}
