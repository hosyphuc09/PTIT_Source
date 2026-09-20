import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class J03038 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        Set<Character> st=new HashSet<>();
        for(int i=0;i<s.length();i++){
            st.add(s.charAt(i));
        }
        System.out.println(st.size());
    }
}
