import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    static int deno[] ={1, 5, 10, 20, 100}; 
    
    public static void main(String args[]){
        long amount = scan.nextLong();
        
        long count = 0;
        for(int i = deno.length - 1; i >= 0; i--){
            if(amount >= deno[i]){
                long number = amount/deno[i];
                
                count += number;
                amount = amount%deno[i];                 
            }
        }
        
        System.out.println(count);
    }
    
}

