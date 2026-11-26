
import java.io.*;
import java.util.*;

public class Main {
    @SuppressWarnings("unchecked")
    public static void main(String[] args) throws Exception {
        ObjectInputStream ois = new ObjectInputStream(
                new FileInputStream("DATA.in"));

        ArrayList<String> ds = (ArrayList<String>) ois.readObject();

        HashMap<String, Integer> map = new HashMap<>();

        for (String s : ds) {
            s = s.toLowerCase();
            String[] a = s.split("[^a-z0-9]+");

            for (String x : a) {
                if (!x.isEmpty()) {
                    map.put(x, map.getOrDefault(x, 0) + 1);
                }
            }
        }

        List<Map.Entry<String, Integer>> list =
                new ArrayList<>(map.entrySet());

        list.sort((x, y) -> {
            int cmp = y.getValue().compareTo(x.getValue());
            if (cmp != 0) return cmp;
            return x.getKey().compareTo(y.getKey());
        });

        for (Map.Entry<String, Integer> x : list) {
            System.out.println(x.getKey() + " " + x.getValue());
        }

        ois.close();
    }
}
