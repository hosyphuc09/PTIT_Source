import java.util.Scanner;

public class sapXepChen {
    public static void main(String[] arge){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] a=new int[n];
        int buoc=0;
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        System.out.print("Buoc "+buoc+": "+a[0]);
        System.out.println();
        for(int i=1;i<n;i++){
            int x=a[i];
            int j=i-1;
            while(j>=0 && a[j]>x){
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=x;
            buoc++;
            System.out.print("Buoc "+buoc+": ");
            for(int k=0;k<=i;k++){
                System.out.print(a[k]+" ");
            }
            System.out.println();
        }
    }
}
