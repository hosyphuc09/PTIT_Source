import java.util.Scanner;

public class tongUocSo_2{
    public static void main(String[] arge){
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();

        int b=sc.nextInt();
        int[] sum=new int[b+1];
        for(int i=1;i<=b/2;i++){
            for(int j=i*2;j<=b;j+=i){
                sum[j]+=i;
            }
        }
        int count=0;
        for(int i=a;i<=b;i++){
            if( sum[i]>i){
                count++;
            }
        }
        System.out.println(count);
    }
}