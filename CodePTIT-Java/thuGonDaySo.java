import java.util.ArrayList;
import java.util.Scanner;
import java.util.Stack;
public class thuGonDaySo {
    public static void main(String[] arge){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        Stack<Integer> st=new Stack<>();
        for(int i=0;i<n;i++){
            int x=sc.nextInt();
            if(!st.empty()&& (st.peek()+x)%2==0){
                st.pop();
            }else{
                st.push(x);
            }
        }
        System.out.println(st.size());
    }
}
