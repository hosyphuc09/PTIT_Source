import java.util.Scanner;

public class vidu_vaoraxau{
    static String chuanhoa(String s){
        String[] tu=s.trim().split("\\s+");
        StringBuilder sb=new StringBuilder();
        for(int i=0;i<tu.length;i++){
            if(i>0) sb.append(" ");
            sb.append(Character.toUpperCase(tu[i].charAt(0)));
            sb.append(tu[i].substring(1).toLowerCase());

        }
        return sb.toString();
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        System.out.println(chuanhoa(s));
    }
}