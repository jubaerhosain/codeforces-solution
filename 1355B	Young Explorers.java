import java.util.*;

public class Solution {
    private static Scanner scan = new Scanner(System.in);
    private static int MAX = 2*100000+2;

    public static void main(String args[]) {
        int test = scan.nextInt();

        while(test-- > 0) {
            int n = scan.nextInt();
            Map<Integer, Integer> map = new TreeMap<>();

            for(int i = 0; i < n; i++) {
                int key = scan.nextInt();
                map.put(key, map.getOrDefault(key, 0)+1);
            }

            int ans = 0, left = 0;
            for(int key: map.keySet()) {
                int count = map.get(key)+left;
                ans += (count/key);
                left = count%key;
            }

            System.out.println(ans);
        }
    }
}



