import java.util.*;

public class Solution {
    private static Scanner scan = new Scanner(System.in);

    public static void main(String args[]) {
        int t = scan.nextInt();
        
        while(t-- > 0) {
            int n = scan.nextInt();
            
            int odd = 0, even = 0;
            for(int i = 1; i <= n; i++) {
                int val = scan.nextInt();
                if(val%2 == 0) {
                    even++;
                } else {
                    odd++;
                }
            }
            
            if(odd%2 != 0) {
                System.out.println("NO");
            } else if(even%2 == 0) {
                System.out.println("YES");
            } else {
                if(odd == 0) {
                    System.out.println("NO");
                } else {
                    System.out.println("YES");
                }
            }
        }
    }
    
}




