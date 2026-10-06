import java.util.Scanner;

public class bai12 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        if (sc.hasNextInt()) {
            int t = Integer.parseInt(sc.nextLine().trim());
            while (t-- > 0) {
                String s = sc.nextLine().trim();
                
                // Tách xâu dựa trên một hoặc nhiều khoảng trắng
                String[] words = s.split("\\s+");
                StringBuilder sb = new StringBuilder();
                
                for (int i = 0; i < words.length; i++) {
                    String word = words[i];
                    if (!word.isEmpty()) {
                        // Chữ cái đầu viết hoa, các chữ cái sau viết thường
                        String normalizedWord = word.substring(0, 1).toUpperCase() + 
                                               word.substring(1).toLowerCase();
                        sb.append(normalizedWord);
                        if (i < words.length - 1) {
                            sb.append(" ");
                        }
                    }
                }
                
                System.out.println(sb.toString());
            }
        }
        sc.close();
    }
}