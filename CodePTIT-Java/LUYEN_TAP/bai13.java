import java.util.Scanner;

public class bai13 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        if (sc.hasNextInt()) {
            int n = Integer.parseInt(sc.nextLine().trim());
            while (n-- > 0) {
                String s = sc.nextLine().trim();
                
                // Tách xâu dựa trên khoảng trắng
                String[] words = s.split("\\s+");
                
                // Từ đầu tiên trong xâu nhập vào là Họ
                String familyName = words[0].toUpperCase();
                
                // Chuẩn hóa Tên đệm và Tên (từ vị trí 1 đến cuối)
                StringBuilder sb = new StringBuilder();
                for (int i = 1; i < words.length; i++) {
                    String word = words[i];
                    if (!word.isEmpty()) {
                        String normalized = word.substring(0, 1).toUpperCase() + 
                                             word.substring(1).toLowerCase();
                        sb.append(normalized);
                        if (i < words.length - 1) {
                            sb.append(" ");
                        }
                    }
                }
                
                // Ghép phần Tên đệm + Tên với Họ (cách nhau bởi dấu phẩy và khoảng trắng)
                sb.append(", ").append(familyName);
                
                System.out.println(sb.toString());
            }
        }
        sc.close();
    }
}