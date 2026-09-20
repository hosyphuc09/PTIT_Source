import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.List;

public class arraylist {
    public static void main(String[] args) {
        //1.khai bao
        ArrayList<Integer> lst =new ArrayList<>();
        //2.khai bao so luong ptu
        ArrayList<Integer> lst2=new ArrayList<>(5);
        //3.khoi tao list
        ArrayList<Integer> lst3=new ArrayList<>(List.of(1,2,3,4,5,6,7));
        //4.xuat list
        System.out.println(lst);
        System.out.println(lst3);
        //5. them ptu
         ArrayList<Integer> lst4 =new ArrayList<>();
         lst4.add(7);
         lst4.add(11);
         lst4.add(12);
         System.out.println("lst4 moi add la: "+lst4);
         lst4.add(1,100);
         System.out.println("lst4 moi add la: "+lst4);
         //5.so luong ptu
         System.out.println("sl ptu la: "+lst4.size());
         //7.get(int,index) tra ve gia trin tai vi tri index
         System.out.println("gia tri tai vi tri 3 la: "+lst4.get(3));
         //8. remove(index) xoa 1 ptu tai vi tri index
         lst4.remove(2);
         System.out.println(" ptu con lai sau khi xoa la: "+lst4);
         ArrayList<Integer> lst5=new ArrayList<>(List.of(1,2,5,5,3,4,5,6,7,8,9));
         System.out.println(lst5);
         lst5.remove(Integer.valueOf(5));
         System.out.println(" lst5 sau khi xoa la: "+lst5);
         lst5.set(2,100 );
         System.out.println(lst5);
        boolean ktra =lst5.contains(9);
        System.out.println(ktra);
        //ktra tinh tang dan-sort
        ArrayList<Integer> lst6=new ArrayList<>(List.of(3,5,1,8,9,7));
        Collections.sort(lst6);
        System.out.println(lst6);
        //index():tim vtri xuan hien dau tien trong list
         ArrayList<Integer> lst7=new ArrayList<>(List.of(3,5,1,8,9,7));
         System.out.println("so 8 xuan hien thu: "+(lst7.indexOf(8)+1));
         // cach duyet list
         //c1: dung vong for
         for(int a:lst7){
            System.out.print(a+" ");
         }
         System.out.println();
         //c2: sd cac chi so index
         for(int i=0;i<lst7.size();i++){
            int vl=lst7.get(i);
            System.out.print(vl+ " ");
         }
         System.out.println();
    }
}
