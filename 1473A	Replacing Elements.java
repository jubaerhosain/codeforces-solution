import java.util.*;

public class Solution {
    private static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]) {
        int t = scan.nextInt();
        
        while(t-- > 0) {
            int n = scan.nextInt();
            int d = scan.nextInt();
            
            int[] arr = new int[n];
            int min1 = Integer.MAX_VALUE, min2 = Integer.MAX_VALUE;
            int max = Integer.MIN_VALUE;
            for(int i = 0; i < n; i++) {
                arr[i] = scan.nextInt();
                
                max = Math.max(max, arr[i]);
                if(min1 > arr[i]) {
                    min2 = min1;
                    min1 = arr[i];
                } else {
                    min2 = Math.min(min2, arr[i]);
                }
            }
            
            if(min1+min2 <= d || max <= d) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
    
}



