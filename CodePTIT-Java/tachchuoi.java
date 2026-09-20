public class tachchuoi {

    public static void main(String[] arge){
        String path="D:/galailaptrinh/music/remix.mp3";
        int numberindex=path.lastIndexOf("/");
        String s=path.substring(numberindex+1);
        System.out.println(s);
        int c=s.lastIndexOf('.');
        System.out.println(c);
        String ss=s.substring(0,c);
        System.out.println(ss);
    }
}