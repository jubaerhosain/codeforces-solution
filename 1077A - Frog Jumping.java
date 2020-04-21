import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int queri = scan.nextInt();
        
        while(queri-- > 0){
            long a = scan.nextLong();
            long b = scan.nextLong();
            long k = scan.nextLong();
            
            long ans = (a*(k/2)) - (b*(k/2));
            if(k%2 != 0){
                ans += a;
            }
            
            System.out.println(ans);
        }
    }
    
}
