

public class String_java {
    public static void main(String[] args) {
       
        String s="     Cong cha nhu nui thai son"+"\nNghia me nhu nuoc trong nguon chay ra";
        System.out.println(s);
        StringBuilder chuoi=new StringBuilder();
        // cac phuong thuc thuong dung
        // append: them vao cuoi chuoi
        chuoi.append("xin chao , ");
        chuoi.append("\nlam qune dc chu");
        System.out.println(chuoi);
        chuoi.insert(4, "phuc");
        System.out.println(chuoi);
        chuoi.delete(4, 8);
        System.out.println(chuoi);
        String ss="xin chao moi nguoi";
        // indexof: tra ve vi tri xuat hien dau tien
        System.out.println(" chu chao o vi tri thu: "+ss.indexOf(" "));
        //lastindexof: tra ve vi tri xuat hien cuoi cung
        System.out.println("chu nguoi xuat hine thu: "+ss.lastIndexOf("nguoi"));
        //contains: ktra chuoi con
        String ss1=".mp3";
        String ss2="tuhoc.mp3";
        //ktra ss2 chua cum string cua ss1 ko
        boolean check=ss2.contains(ss1);
        if(check){
            System.out.println("co chua mp3 trong chuoi");
        }else System.out.println("ko chua mp3 trong chuoi");
        //substring: trich loc chuoi tu chuoi ban dau
        String ss3="abcdefgh";
        String ss4=ss3.substring(4);
        String ss5=ss3.substring(6,8);
        System.out.println(ss4);
        System.out.println(ss5);
        String ss6="hoc hoc nua hoc mai";
        String ss7=ss6.replace("hoc","study");
        System.out.println(ss6);
        System.out.println(ss7);
        String ss8=ss6.replaceFirst("hoc","Study");
        System.out.println(ss8);
        String ss9="   xin chao moi nguoi   ";
        String ss10=ss9.trim();
        System.out.println(ss9);
        System.out.println(ss10);
        // dung \s+$ de xoa tat ca khoang trang o cuoi chuoi
        String ss11=ss9.replaceAll("\\s+$", "");
        System.out.println(ss11);
        System.out.println(ss9.length());
        System.out.println(ss11.length());
        // xoa khoang trang cuoi xhuoi bang vong lap while
        String ss12="    xin chao moi nguoi nha    ";
        while(ss12.endsWith(" ")){
            ss12=ss12.
        }

    }
   
}
