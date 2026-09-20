import java.util.Scanner;
import java.util.Stack;

public class J03027 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        Stack<Character> st=new Stack<>();
        String s=sc.next();
        for(int i=0;i<s.length();i++){
            char c=s.charAt(i);
            if(!st.empty()&&st.peek()==c){
                st.pop();
            }else{
                st.push(c);
            }
        }
        if(!st.empty()){
        for(char x:st){
            System.out.print(x);
        }System.out.println();
    }else{
            System.out.println("Empty String");
        }
    }
}
