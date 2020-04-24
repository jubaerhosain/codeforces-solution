import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int test = scan.nextInt();
        
        while(test-- > 0){
            long n = scan.nextLong();
            long cofficient = 1, pw = 1;
            
            while(pw <= 30){
                cofficient += (long)Math.pow(2,pw);
                
                if(n%cofficient == 0){
                    System.out.println(n/cofficient);
                    break;
                }
                pw++;
            }
        }
    }
    
}
