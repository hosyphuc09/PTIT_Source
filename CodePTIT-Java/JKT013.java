import java.util.*;

public class JKT013 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            Stack<String> st=new Stack<>();
            int n=sc.nextInt();
            ArrayList<String> ss=new ArrayList<>();
            st.push("6");
            st.push("8");
            while(!st.empty()){
                String s=st.pop();
                if(s.length()<=n){
                    ss.add(s);
                } 
                if(s.length()<n){
                    st.push(s+"6");
                    st.push(s+"8");
                }
            }
            Collections.sort(ss,(a,b)-> {
                if(a.length()!=b.length()){
                    return b.length()-a.length();
                }
                return b.compareTo(a);
            });
            System.out.println(ss.size());
            for(String s:ss){
                System.out.print(s+" ");
            }
            System.out.println();
        }
    }
}
