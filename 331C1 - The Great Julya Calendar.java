import java.util.*;

public class Solution {
    private static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]) {
        long n = scan.nextLong();
        
        long res = 0;
        while(n > 0) {
            long tmp = n, max = 0;
            while(tmp > 0) {
                max = Math.max(max, tmp%10);
                tmp /= 10;
            }
            
            n -= max;
            res++;
        }
        
        System.out.println(res);
    }
}
