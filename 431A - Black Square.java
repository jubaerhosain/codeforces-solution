import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    static int[] calories = new int[5];
    
    public static void main(String args[]){
        for(int i = 1; i <= 4; i++){
            calories[i] = scan.nextInt();
        }
        char[] s = scan.next().toCharArray();
        
        int total = 0;
        for(int i = 0; i < s.length; i++){
            total += calories[s[i] - 48];
        }
        
        System.out.println(total);
    }
    
}
