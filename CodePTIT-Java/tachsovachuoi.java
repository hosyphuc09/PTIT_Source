import java.util.Scanner;

public class tachsovachuoi {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String input=sc.nextLine();
        String[] arr=input.split(" ");
        String chu="";
        String so="";
        for(String tu:arr){
            try{
                 Integer.parseInt(tu);
                 so+=tu+" ";
            } catch(NumberFormatException e){
                chu+=tu+" ";
            }
        }
        System.out.println(so);
        System.out.println(chu);
        System.out.println("cach 2");
        String soo="";
        String chuu="";
        for(String tu:arr){
            if(tu.matches("[a-zA-Z]+")){
                chuu+=tu+" ";
            }
            if(tu.matches("\\d+")){
                soo+=tu+" ";
            }
        }
        System.out.println(soo);
        System.out.println(chuu);
    }
}