import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int test = scan.nextInt();
        
        while(test-- > 0){
            int n = scan.nextInt();
            long m = scan.nextLong();
            
            long sum = 0;
            for(int i = 0; i < n; i++){
                sum += scan.nextInt();
            }
            
            System.out.println(Math.min(sum, m));
        }
    }
    
}
