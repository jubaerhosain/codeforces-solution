import java.util.*;

public class Solution {
    private static Scanner scan = new Scanner(System.in);

    public static void main(String args[]) {
        int t = scan.nextInt();
        
        while(t-- > 0) {
            int n = scan.nextInt();
            int[] arr = new int[n+1];
            
            for(int i = 1; i <= n; i++) {
                arr[i] = scan.nextInt();
            }
            
            int max = Integer.MIN_VALUE;
            for(int i = n; i >= 1; i--) {
                int total = arr[i];
                if(arr[i]+i <= n) {
                    total += arr[arr[i]+i];
                }
                arr[i] = total;
                max = Math.max(max, arr[i]);
            }
            
            System.out.println(max);
        }
    }
    
}













