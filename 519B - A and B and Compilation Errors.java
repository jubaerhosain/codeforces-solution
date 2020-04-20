import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    static int unicode[] = new int[26];
    
    public static void main(String args[]){
        int n = scan.nextInt();
        
        int sum1 = 0, sum2 = 0, sum3 = 0;
        for(int i = 0; i < n; i++){
            sum1 += scan.nextInt();
        }
        
        for(int i = 0; i < n-1; i++){
            sum2 += scan.nextInt();
        }
        
        for(int i = 0; i < n-2; i++){
            sum3 += scan.nextInt();
        }
        
        
        System.out.println(sum1 - sum2);
        System.out.println(sum2 - sum3);
    }
}
