import java.util.*;


public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int t = scan.nextInt();
        
        for(int i = 1; i <= t; i++){
            long a = scan.nextLong();
            long b = scan.nextLong();
            
            long move;
            if(a%b == 0){
                move = 0;
            }
            else{
                move = b - (a%b);
            }
            
            System.out.println(move);
        }
    }
    
    
}

