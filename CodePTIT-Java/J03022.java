import java.util.Scanner;

public class J03022 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        StringBuilder text=new StringBuilder();
        while(sc.hasNextLine()){
            text.append(sc.nextLine()).append(" ");
        }
        // tach theo . ! ?
        String[] s=text.toString().split("[.!?]");
        for(String x:s){
            x=x.trim();
            if(x.isEmpty()) continue;
            String[] works=x.trim().split("\\s+");
            for(int i =0;i<works.length;i++){
                String work=works[i].toLowerCase();
                if(i==0){
                    work=Character.toUpperCase(work.charAt(0))+work.substring(1);

                }
                if (i>0){
                    System.out.print(" ");
                }
                System.out.print(work);
                }
            
            System.out.println();
        }
    }
}

