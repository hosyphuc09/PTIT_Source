import java.util.Scanner;
import java.io.*;

public class J07002 {
    public static void main(String[] args) throws Exception{
        Scanner sc=new Scanner(new File("DATA.in"));
        long tong=0;
        while(sc.hasNext()){
            String s=sc.nextLine();
            String[] a=s.split(" ");
            for(int i=0;i<a.length;i++){
                boolean f=false;
                for(int j=0;j<a[i].length();j++){
                    if(Character.isDigit(a[i].charAt(j))){
                        f=true;
                    }else{
                        f=false;
                        break;
                    }
                }
                if(f){
                if(a[i].length()<=9){
                tong+=Integer.parseInt(a[i]);}}
            }

        }
        System.out.println(tong);
    }
}
