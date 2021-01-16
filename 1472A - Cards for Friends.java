import java.util.*;

public class Solution {
    private static Scanner scan = new Scanner(System.in);

    public static void main(String args[]) {
        int t = scan.nextInt();
        
        while(t-- > 0) {
            int w = scan.nextInt();
            int h = scan.nextInt();
            int n = scan.nextInt();
            
            if(n == 1) {
                System.out.println("YES");
            } else if(w%2 != 0 && h%2 != 0) {
                System.out.println("NO");
            } else {
                int count = 0;
                while(w%2 == 0 || h%2 == 0) {
                    if(w%2 == 0) {
                        count += 1;
                        w /= 2;
                    } else {
                        count += 1;
                        h /= 2;
                    }
                    
                    if(Math.pow(2, count) >= n) {
                        break;
                    }
                }
                
                if(Math.pow(2, count) >= n) {
                    System.out.println("YES");
                } else {
                    System.out.println("NO");
                }
            }
        }
    }
    
}













import java.util.*;

public class Solution {
    private static Scanner scan = new Scanner(System.in);

    public static void main(String args[]) {
        int t = scan.nextInt();
        
        while(t-- > 0) {
            int w = scan.nextInt();
            int h = scan.nextInt();
            int n = scan.nextInt();
            
            if(n == 1) {
                System.out.println("YES");
            } else if(w%2 != 0 && h%2 != 0) {
                System.out.println("NO");
            } else {
                int count = 0;
                while(w%2 == 0 || h%2 == 0) {
                    if(w%2 == 0) {
                        count += 1;
                        w /= 2;
                    } else {
                        count += 1;
                        h /= 2;
                    }
                    
                    if(Math.pow(2, count) >= n) {
                        break;
                    }
                }
                
                if(Math.pow(2, count) >= n) {
                    System.out.println("YES");
                } else {
                    System.out.println("NO");
                }
            }
        }
    }
    
}













