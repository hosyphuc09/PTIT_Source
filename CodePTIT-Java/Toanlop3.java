import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Toanlop3 {
    static boolean match(String s1,String s2){
        if(s1.length()!=s2.length()) return false;
        for(int i=0;i<s1.length();i++){
            char p=s1.charAt(i);
            if(p!='?'&&p!=s2.charAt(i)){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) throws Exception {
       BufferedReader rd=new BufferedReader(new InputStreamReader(System.in));
       int t=Integer.parseInt(rd.readLine().trim());
       while(t-->0){
        String str=rd.readLine();
        String ans=null;
        for(int i=10;i<=99;i++){
            for(int j=10;j<=99;j++){
                //+
                int res=i+j;
                if(res>=10&&res<=99){
                  String cand=String.format("%02d",i)+" + "+String.format("%02d",j)+" = "+String.format("%02d",res);
                    if(match(str,cand)){
                        ans=cand;
                    }
                }
                //-
                res=i-j;
                if(res>=10&&res<=99){
                    String cand=String.format("%02d",i)+" - "+String.format("%02d",j)+" = "+String.format("%02d",res);
                    if(match(str, cand)){
                        ans=cand;
                    }
                }
                res=i*j;
                if(res>=10&&res<=99){
                    String cand=String.format("%02d",i)+" * "+String.format("%02d",j)+" = "+String.format("%02d",res);
                    if(match(str, cand)){
                        ans=cand;
                    }
                }
                if(i/j==0){
                res=i/j;
                if(res>=10&&res<=99){
                     String cand=String.format("%02d",i)+" / "+String.format("%02d",j)+" = "+String.format("%02d",res);
                    if(match(str, cand)){
                        ans=cand;
                    }
                }
            }}
        }
       if(ans==null) System.out.println("WRONG PROBLEM!");
       else System.out.println(ans);
    }}
}
