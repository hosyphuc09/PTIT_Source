import java.util.Scanner;

public class Checkmk {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String password="";
        while(true){
            System.out.println("moi nhap mk");
            System.out.println("moi nhap mk hop le");
            String newpassword=sc.nextLine();
            if(checkmk(newpassword)){
                password=newpassword;
                System.out.println("mk dc tiep nhan");
                break;
            }else{
                System.out.println("moi nhap lai mk");
            }
        }
        String login="";
        int count=0;
        while(true){
            System.out.println("moi nhap mk");
            String newLogin=sc.nextLine();
            if(newLogin.equals(password)){
                System.out.println("mk hop le");
                break;
            }else{
                count++;
                System.out.println("mk ko hop le, moi nhap lai");

            }
            if(count==5){
                System.out.println("tk cua ban bi khoa");
            }
        }
    }
    public static boolean checkmk(String password){
        //kien tra do dai
        if(password.length()<6) return false;
        // kiem tra xem mat khau co chua it nhat 1 chu cai hay ko
        boolean hasLetter=false;
        for(char c:password.toCharArray()){
            if(Character.isLetter(c)){
                hasLetter=true;
                break;
            }
        }
        if(!hasLetter) return false;
        // kiem tra xem mk co chua it nha 1 so ko
        boolean hasNumber=false;
        for(char c:password.toCharArray()){
            if(Character.isDigit(c)){
                hasNumber=true;
                break;
            }
        }
        if(!hasNumber) return false;
        return true;
    }
}
