import java.util.Scanner;

public class mahoa {
    public static void main(String[] args) {
        String a="abcdefghijklmno";
        String b="zxcvbnmasdfghjk";
        // nhap thong tin can ma hoa
        Scanner sc=new Scanner(System.in);
        System.out.println("moi nhap thong tin can ma hoa");
        String output="";
        String input=sc.nextLine();
        for(int i=0;i<input.length();i++){
            char c=input.charAt(i);
            int index=a.indexOf(c);
            if(index==-1){
                output+=c;
            }else{
                output+=b.charAt(index);
            }
           
        }
         System.out.println("thong tin sau khi ma hao la: "+output);
    }
}
