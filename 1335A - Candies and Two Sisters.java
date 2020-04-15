import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        long t = scan.nextLong();
        
        while(t-- > 0){
            long input = scan.nextLong();
            
            if(input <= 2){
                System.out.println(0);
            }
            else{
                System.out.println((input-1)/2);
            }
        }
    }
    
}

