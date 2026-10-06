import java.util.Scanner;
import java.util.Stack;

public class J08024 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            Stack<String> st=new Stack<>();
            st.push("90");
            String s="";
            while(!st.empty()){
                String ss=st.peek();
                if(Integer.parseInt(ss)%n==0){
                    System.out.println(ss);
                    break;
                }else{
                    st.push(ss+"0");
                    st.push(ss+"9");
                }
                st.pop();
            }
        }
    }
}
