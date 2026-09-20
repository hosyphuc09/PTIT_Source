import java.util.HashMap;
import java.util.Scanner;

public class Hashmap {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        //1. khai bao hashmap
        HashMap<Integer,String> map=new HashMap<>();
        HashMap<Integer,Float> map1=new HashMap<>();
        //2. cac phuong thuc
        //2.1 them cac ptu
        map.put(1,"abc");
        map.put(2,"asd");
        //2.1 lay gia tri phan tu
        String value=map.get(1);
        String value1=map.get(2);
        System.out.println(value);
        System.out.println(value1);
    }
}
