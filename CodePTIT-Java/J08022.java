import java.util.Scanner;
import java.util.Stack;

public class J08022{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            Stack<Integer> st=new Stack<>();
            int n=sc.nextInt();
            int[] a=new int[n];
            for(int i=0;i<n;i++){
                a[i]=sc.nextInt();
            }
            int[] result=new int[n];
            for(int i=n-1;i>=0;i--){
                while(!st.empty()&&st.peek()<=a[i]){
                    st.pop();
                }
                if(st.empty()){
                    result[i]=-1;

                }
                if(!st.empty()){
                    result[i]=st.peek();
                    
                }
                st.push(a[i]);
            }
            for(int i=0;i<n;i++){
                System.out.print(result[i]+" ");
            }
            System.out.println();
        }
    }
}