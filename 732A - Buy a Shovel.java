import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int k = scan.nextInt();
        int r = scan.nextInt();
        
        int counter = 1;
        while(true){
            int total = counter * k;
            int rem = total%10;
            
            if(rem == 0 || rem == r){
                break;
            }
            counter++;
        }
        
        System.out.println(counter);
    }
    
}

