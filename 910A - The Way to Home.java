import java.util.*;

public class Solution {
    private static Scanner scan = new Scanner(System.in);

    public static void main(String args[]) {
        int n = scan.nextInt();
        int d = scan.nextInt();
        char[] arr = scan.next().toCharArray();
        
        int dp[] = new int[arr.length];
        Arrays.fill(dp, 1000000);
        dp[0] = 0;
        for(int i = 1; i < arr.length; i++) {
            if(arr[i] == '1') {
                for(int j = i-d; j < i; j++) {
                    if(j >= 0) {
                        dp[i] = Math.min(dp[i], dp[j]+1);
                    }
                }
            }
        }
        
        System.out.println(dp[arr.length-1] < 1000000 ? dp[arr.length-1]:-1);
    }
}













