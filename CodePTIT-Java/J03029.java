import java.util.Scanner;

public class J03029 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        while(sc.hasNextLine()){
            String s=sc.nextLine();
            String[] a=s.trim().split("\\s+");
            for(int i=0;i<a.length;i++){
                String work=a[i].toLowerCase();
                if(work.equals("!") || work.equals("?") || work.equals(".")){
                    System.out.print(work);
                    continue;
                }
                if(i==0){
                    work=Character.toUpperCase(work.charAt(0))+work.substring(1);

                }
                System.out.print(work);
                if(i==a.length-1){
                    String tu=a[i];
                    int dex=tu.length();
                    if(tu.charAt(dex-1)!='.') System.out.print(".");
                }
                if(i < a.length-1){
        // Nếu từ tiếp theo là dấu câu thì KHÔNG in khoảng trắng
                    if(a[i+1].equals("!") || a[i+1].equals("?") || a[i+1].equals(".")){
            // không làm gì
                    }else{
                        System.out.print(" ");
                    }
                }
            }
            System.out.println();
        }
    }
}
