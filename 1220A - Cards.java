import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    static int unicode[] = new int[26];
    
    public static void main(String args[]){
        int n = scan.nextInt();
        char[] input = scan.next().toCharArray();
        
        int zero = 0, one = 0 ;
        for(int i = 0; i < input.length; i++){
            if(input[i] == 'z'){
                zero++;
            }
        }
        
        one = (n - (zero*4)) / 3;
        
        for(int i = 1; i <= one; i++){
            System.out.print(1 + " ");
        }
        for(int i = 1; i <= zero; i++){
            System.out.print(0 + " ");
        }
    }
}
