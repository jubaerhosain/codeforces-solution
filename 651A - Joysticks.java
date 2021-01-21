import java.util.*;

public class Solution {
    private static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]) {
        int a1 = scan.nextInt();
        int a2 = scan.nextInt();
        
        int ans =  0;
        while((a1 > 0 && a2 > 0) && (a1 > 1 || a2 > 1)) {
            if(a1 < a2) {
                a1 += 1;
                a2 -= 2;
            } else {
                a1 -= 2;
                a2 += 1;
            }
            ans++;
        }
        
        System.out.println(ans);
    }
}
