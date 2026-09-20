import java.util.Scanner;

public class sapXepNoiBot {
    public static void main(String[] arge){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] a=new int[n];
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        int buoc=1;
        for(int i=0;i<n-1;i++){
            boolean f=false;
            for(int j=0;j<n-1-i;j++){
                if(a[j]>a[j+1]){
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    f=true;
                }
            }
            if(!f){
                break;
            }
            System.out.print("Buoc "+buoc+": ");
            for(int k=0;k<n;k++){
                System.out.print(a[k]+" ");
            }
            System.out.println();
            buoc++;
        }
    }
}
