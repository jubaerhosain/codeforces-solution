import java.util.*;

public class Solution {
    private static Scanner scan = new Scanner(System.in);

    public static void main(String args[]) {
        int n = scan.nextInt();
        int k = scan.nextInt();
        
        int[] arr = new int[n];
        for(int i = 0; i < n; i++) {
            arr[i] = scan.nextInt();
        }
        
        int total = 0;
        for(int i = 1; i < n; i++) {
            if(arr[i-1]+arr[i] < k) {
                int currAdd = k-(arr[i-1]+arr[i]);
                total += currAdd;
                arr[i] += currAdd;
            }
        }
        
        System.out.println(total);
        for(int val: arr) {
            System.out.print(val+" ");
        }
        System.out.println();
    }
}













