import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int min = Integer.MAX_VALUE, max = Integer.MIN_VALUE;
        
        for(int i = 0; i < 3; i++){
            int input = scan.nextInt();
            if(input < min){
                min = input;
            }
            if(input > max){
                max = input;
            }
        }
        
        System.out.println(max-min);
    }
    
}

