import java.util.*;

public class Solution {
    private static Scanner scan = new Scanner(System.in);

    public static void main(String args[]) {
        int test = scan.nextInt();
        
        while(test-- > 0) {
            int n = scan.nextInt();
            int q = scan.nextInt();
            String str = scan.next();
            
            while(q-- > 0) {
                int l = scan.nextInt()-1;
                int r = scan.nextInt()-1;
                
                if(hasLeft(str, l) || hasRight(str, r)){
                    System.out.println("YES");
                } else {
                    System.out.println("NO");
                }
            }
        }
    }
    
    //###########################################################
    private static boolean hasLeft(String str, int l) {
        for(int i = 0; i < l; i++) {
            if(str.charAt(i) == str.charAt(l)) return true;
        }
        
        return false;
    }
    
    private static boolean hasRight(String str, int r) {
        for(int i = r+1; i < str.length(); i++) {
            if(str.charAt(i) == str.charAt(r)) return true;
        }
        
        return false;
    }
}
