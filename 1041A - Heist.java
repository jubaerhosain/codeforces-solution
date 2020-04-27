import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String []args){
        int n = scan.nextInt();
        int max = Integer.MIN_VALUE, min = Integer.MAX_VALUE;
        
        for(int i = 0; i < n; i++){
            int input = scan.nextInt();
            
            if(max < input){
                max = input;
            }
            if(min > input){
                min = input;
            }
        }
        
        System.out.println((max-min+1) - n);
    }
}






