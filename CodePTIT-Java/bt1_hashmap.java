import java.util.HashMap;
import java.util.Scanner;

public class bt1_hashmap {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        HashMap<String,String> map=new HashMap<>();
        
        for(int i=1;i<=3;i++){
            System.out.print("moi nhap user: ");
            String n=sc.nextLine();
            System.out.print("moi nhap password: ");
            String m=sc.nextLine();
            map.put(n, m);
        }
        // for(String key:map.keySet()){
        //     String k=map.get(key);
        //     if(map.containsKey(key)==false) System.out.println("chuong trinh ko ton tai");
        //     else if(map.containsKey(key)==true&&map.containsValue(k)==false){
        //         System.out.println("password sai!");
        //     }else if(map.containsKey(key)==true&&map.containsValue(k)==true){
        //         System.out.println("Thanh cong");
        //     }
        System.out.print("moi nhap user de check: ");
        String n=sc.nextLine();
        System.out.print("moi nhap password de check: ");
        String m=sc.nextLine();
        if(!map.containsKey(n)){
            System.out.println("chuong trinh ko ton tai");
        }else if(map.containsKey(n)&&!map.containsValue(m)){
            System.out.println("password sai!");
        }else if(map.containsKey(n)&&map.containsValue(m)){
            System.out.println("Thanh cong");
        }
    }
}
