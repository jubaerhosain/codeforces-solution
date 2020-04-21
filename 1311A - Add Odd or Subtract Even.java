import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    static int[] calories = new int[5];
    
    public static void main(String args[]){
        int test = scan.nextInt();
        
        while(test-- > 0){
            int a = scan.nextInt();
            int b = scan.nextInt();
            
            int ans = 0;
            if(a < b){
                int c = b - a;
                ans++;
                if(c%2 == 0){
                    ans++;
                }
            }
            else if(a > b){
                int c = a - b;
                ans++;
                if(c%2 != 0){
                    ans++;
                }
            }
            
            System.out.println(ans);
        }
    }
    
}
