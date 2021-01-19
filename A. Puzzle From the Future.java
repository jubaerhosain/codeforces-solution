import java.util.*;

public class Solution {
    private static Scanner scan = new Scanner(System.in);

    public static void main(String args[]) {
        int test = scan.nextInt();
        
        while(test-- > 0) {
            int n = scan.nextInt();
            char[] b = scan.next().toCharArray();
            
            char[] d = new char[n];
            for(int i = 0; i < n; i++) {
                if(b[i] == '1') {
                    d[i] = '2';
                } else {
                    d[i] = '1';
                }
            }
            
            char[] a = new char[n];
            a[0] = '1';
            for(int i = 1; i < n; i++) {
                if(d[i] == d[i-1]) {
                    a[i] = '0';
                    if(d[i] == '2') {
                        d[i] = '1';
                    } else {
                        d[i] = '0';
                    }
                } else {
                    a[i] = '1';
                }
            }
            
            System.out.println(String.valueOf(a));
        }
        
    }
}
