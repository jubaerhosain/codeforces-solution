import java.util.*;

public class Solution {
    private static Scanner scan = new Scanner(System.in);

    public static void main(String args[]) {
        int test = scan.nextInt();
        
        while(test-- > 0) {
            int n = scan.nextInt();
            int[] arr1 = new int[n];
            for(int i = 0; i < n; i++) {
                arr1[i] = scan.nextInt();
            }
            
            int m = scan.nextInt();
            int[] arr2 = new int[m];
            for(int i = 0; i < m; i++) {
                arr2[i] = scan.nextInt();
            }
            
            System.out.println(maxSum(arr1)+maxSum(arr2));
        }
    }
    
    
    //###########################################################
    //maximum prefix sum
    private static int maxSum(int[] arr) {
        int max = 0;
        int curr = 0;
        
        for(int i = 0; i < arr.length; i++) {
            curr += arr[i];
            max =  Math.max(max, curr);
        }
        
        return max;
    }
    
}
