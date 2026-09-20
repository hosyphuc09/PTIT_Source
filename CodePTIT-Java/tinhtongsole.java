import java.util.Scanner;

public class tinhtongsole{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("moi nhap n: ");
        int n=sc.nextInt();
        int tong=0;
        for(int i=1;i<=n;i+=2){
            if(i==3){
                continue;
            }else
            tong+=i;
        
        }
        System.out.println("tong so le la: "+tong);
        System.out.print("moi nhap so nguyen: ");
        int x=sc.nextInt();
        int sum=0;
        for(int i=10;i<=50;i++){
            if(i%3==0){
                sum+=i;

            }
        }
        System.out.println("tong so nguyen chia het cho 3 la: "+sum);
        int S=1;
        for(int i=1;i<=10;i++){
            S*=i;
        }
        System.out.println("tong giai thua la: "+S);
    }
}
