import java.util.Arrays;
import java.util.Scanner;

public class khoangCachNhoHonK {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int k=sc.nextInt();
            int[] a=new int[n];
            for(int i=0;i<n;i++){
                a[i]=sc.nextInt();
            }
            Arrays.sort(a);
            
            Arrays.sort(a);

long dem = 0;
int left = 0;

for (int right = 0; right < n; right++) {

    while (a[right] - a[left] >= k) {
        left++;
    }

    dem += right - left;
}

System.out.println(dem);
        }
    }
}
