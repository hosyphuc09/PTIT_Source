import java.util.Scanner;

public class chuanhoachuoi {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();
       chuanhoa(str);
    }
    public static void chuanhoa(String str){
        str=str.trim();
        String[] words=str.split("\\s+");
        for(int i=0;i<words.length;i++){
            words[i]=words[i].toLowerCase();
            String a=words[i].substring(0,1);
            a=a.toUpperCase();
            words[i]=a+words[i].substring(1,words[i].length());

        }
        for(String ss:words){
            System.out.print(ss+" ");
        }
    }
}
