
import java.io.File;
import java.util.*;

public class bai1 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(new File("DATA.IN"));
        int t = sc.nextInt();
        sc.nextLine();

        LinkedHashMap<String, Integer> map = new LinkedHashMap<>();

        while (sc.hasNextLine()) {
            String s = sc.nextLine().toLowerCase();
            String[] a = s.split("[^a-z0-9]+");

            for (String x : a) {
                if (!x.isEmpty()) {
                    map.put(x, map.getOrDefault(x, 0) + 1);
                }
            }
        }

        for (String x : map.keySet()) {
            System.out.println(x + ": " + map.get(x));
        }

        sc.close();
    }
}
