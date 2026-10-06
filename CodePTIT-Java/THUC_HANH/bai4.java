import java.util.*;

public class bai4 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.nextLine();
        String s2 = sc.nextLine();
        MyFunction mf = new MyFunction();
        System.out.println(mf.f1(s1));
        mf.f2(s2);
    }
}

class MyFunction {

    public int f1(String st) {
        int dem = 0;

        for (int i = 0; i < st.length(); i++) {
            char c = st.charAt(i);

            if (!Character.isLetterOrDigit(c) && c != ' ') {
                dem++;
            }
        }

        return dem;
    }

    public void f2(String st) {
        String[] a = st.toLowerCase().split("\\s+");

        LinkedHashMap<String, Integer> map = new LinkedHashMap<>();

        // Đếm số lần xuất hiện
        for (String x : a) {
            map.put(x, map.getOrDefault(x, 0) + 1);
        }

        // Chuyển Map thành List
        ArrayList<Map.Entry<String, Integer>> list =
                new ArrayList<>(map.entrySet());

        // Sắp xếp số lần xuất hiện giảm dần
        // Nếu bằng nhau thì giữ nguyên thứ tự xuất hiện
        list.sort((x, y) -> y.getValue() - x.getValue());

        // In kết quả
        for (Map.Entry<String, Integer> x : list) {
            System.out.println(x.getKey() + ":" + x.getValue());
        }
    }
}