import java.util.*;

public class Solution {
    private static Scanner scan = new Scanner(System.in);

    public static void main(String args[]) {
        int max = 100000;
        int[] dp = new int[max+1];
        
        int n = scan.nextInt();
        for(int i = 0; i < n; i++) {
            int xi = scan.nextInt();
            dp[xi]++;
        }
        
        for(int i = 1; i <= max; i++) {
            dp[i] += dp[i-1];
        }
        
        int q = scan.nextInt();
        for(int i = 1; i <= q; i++) {
            int mi = scan.nextInt();
            if(mi > max) {
                System.out.println(n);
            } else {
                System.out.println(dp[mi]);
            }
        }
    }
}
