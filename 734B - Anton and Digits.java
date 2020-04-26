import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int k2 = scan.nextInt();
        int k3 = scan.nextInt();
        int k5 = scan.nextInt();
        int k6 = scan.nextInt();
        
        int sum = 0;
        int min = Math.min(k2, Math.min(k5, k6));
        
        sum = min * 256;
        k2 -= min;
        min = Math.min(k3, k2);
        sum += min * 32;
        
        System.out.println(sum);
    }
    
}
