import java.util.*;

public class J03010 {
    public static  void main(String[] arge){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();
        HashMap<String,Integer> map=new HashMap<>();
        while(t-->0){
            String s=sc.nextLine();
            String[] a=s.trim().split("\\s+");
            String email=a[a.length-1].toLowerCase();
            for(int i=0;i<a.length-1;i++){
                email+=Character.toLowerCase(a[i].charAt(0));
            }
            int count=map.getOrDefault(email, 0);
            if(count==0){
                System.out.println(email+"@ptit.edu.vn");
            }else{
                System.out.println(email+(count+1)+"@ptit.edu.vn");
            }
            map.put(email,count+1);
        }
    }
}
