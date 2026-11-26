
import java.io.File;
import java.util.*;

public class bai4 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(new File("VANBAN.in"));
        int n = Integer.parseInt(sc.nextLine());

        HashMap<String, Integer> map = new HashMap<>();

        while (n-- > 0) {
            String s = sc.nextLine().toLowerCase();
            String[] a = s.split("[^a-z0-9]+");

            for (String x : a) {
                if (!x.isEmpty()) {
                    map.put(x, map.getOrDefault(x, 0) + 1);
                }
            }
        }

        List<Map.Entry<String, Integer>> ds =
                new ArrayList<>(map.entrySet());

        ds.sort((x, y) -> {
            int cmp = y.getValue().compareTo(x.getValue());
            if (cmp != 0) return cmp;
            return x.getKey().compareTo(y.getKey());
        });

        for (Map.Entry<String, Integer> x : ds) {
            System.out.println(x.getKey() + " " + x.getValue());
        }

        sc.close();
    }
}
