import java.util.*;

public class Solution {
    private static Scanner scan = new Scanner(System.in);
    public static void main(String args[]) {
        int test = scan.nextInt();
        
        while(test-- > 0) {
            int n = scan.nextInt();
            int[] arr = new int[n];
            for(int i = 0; i < n; i++) {
                arr[i] = scan.nextInt();
            }
            
            boolean first = true;
            for(int i = 0; i < n; i++) {
                if(arr[i] > 1) {
                    first = !first;
                    break;
                } else {
                    first = !first;
                }
            }
            
            if(first) {
                System.out.println("Second");
            } else {
                System.out.println("First");
            }
        }
    }
}
