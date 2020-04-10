import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        long x = scan.nextLong();
        long move;
        
        if(x < 5){
            move = 1;
        }
        else if(x%5 == 0){
            move = x/5;
        }
        else{
            move = (x/5) + 1;
        }
        
        System.out.println(move);
    }
    
}
