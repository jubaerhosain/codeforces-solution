import java.util.*;

public class Solution {
    private static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]) {
        int t = scan.nextInt();
        
        while(t-- > 0) {
            String a = scan.next();
            String b = scan.next();
            
            if(a.length() == b.length()) {
                if(a.compareTo(b) == 0)
                    System.out.println(a);
                else 
                    System.out.println(-1);
            } else {
                printLCM(a,b);
            }
        }
    }
    
    
    //*****************************************************************************
    private static int gcd(int a, int b) {
        if(a == 0) return b;
        else if(b == 0) return a;
        return gcd(b, a%b);
    }
    
    private static void printLCM(String a, String b) {
        int len1 = a.length(), len2 = b.length();
        int length = (len1*len2)/gcd(len1,len2);
        
        String str1 = "";
        for(int i = 1; i <= length/len1; i++) {
            str1 += a;
        }
        
        String str2 = "";
        for(int i = 1; i <= length/len2; i++) {
            str2 += b;
        }
        
        if(str1.compareTo(str2) == 0) {
            System.out.println(str1);
        } else {
            System.out.println(-1);
        }
    }
}
