import java.util.*;

public class Solution{
    private static Scanner scan = new Scanner(System.in);

    public static void main(String []args){
        char[] s1 = scan.next().toCharArray();
        char[] s2 = scan.next().toCharArray();
        
        int l1 = s1.length - 1;
        int l2 = s2.length - 1; 
        
        int cnt = 0;
        while(s1[l1] == s2[l2]){
            cnt++;
            l1--;
            l2--;
            
            if(l1 < 0 || l2 < 0){
                break;
            }
        }
        
        System.out.println((s1.length + s2.length) - (2*cnt));
    }
}
