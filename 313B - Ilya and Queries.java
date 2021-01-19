import java.util.*;

public class Solution {
    private static Scanner scan = new Scanner(System.in);

    public static void main(String args[]) {
        char[] arr = scan.next().toCharArray();
        int[] dp = new int[arr.length];
        
        dp[0] = 1;
        for(int i = 1; i < arr.length; i++) {
            if(arr[i-1] == arr[i]) {
                dp[i] = 1+dp[i-1];
            } else {
                dp[i] = dp[i-1];
            }
        } 
        
        int q = scan.nextInt();
        for(int i = 0; i < q; i++) {
            int left = scan.nextInt()-1;
            int right = scan.nextInt()-1;
            System.out.println(dp[right]-dp[left]);
        }
    }
}
