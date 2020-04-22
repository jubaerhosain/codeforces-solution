import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int test = scan.nextInt();
        
        while(test-- > 0){
            int n = scan.nextInt();
            
            if(n < 7){
                System.out.println(1);
            }
            else{
                if(n%7 == 0){
                    System.out.println(n/7);
                }
                else{
                    System.out.println((n/7)+1);
                }
            }
        }
    }
    
}
