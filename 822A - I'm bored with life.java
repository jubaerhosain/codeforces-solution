import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int a = scan.nextInt();
        int b = scan.nextInt();
        
        long ans = 1;
        for(int i = 1; i <= Math.min(a, b); i++){
            ans *= i;
        }
        
        System.out.println(ans);
    }
    
}
