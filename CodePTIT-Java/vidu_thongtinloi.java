import java.util.*;
public class vidu_thongtinloi {
    public static void main(String[] args) {
        try{
            Object o="chuoi";
            Integer n=(Integer) o;
            System.out.println(n);
        }catch (Exception e){
            System.out.println("Lop: "+e.getClass().getName());
            System.out.println("Thong bao: "+e.getMessage());
            e.printStackTrace();
        }
    }
}
