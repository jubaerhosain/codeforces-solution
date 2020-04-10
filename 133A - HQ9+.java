import java.util.Scanner;
import java.util.Arrays;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    static int[] counter = new int[5];
    
    public static void main(String args[]){
        char[] input = scan.next().toCharArray();
        
        for(int i = 0; i < input.length; i++){
            if(input[i] == 'H' || input[i] == 'Q' || input[i] == '9'){
                System.out.println("YES");
                System.exit(0);
            }
        }
        
        System.out.println("NO");
    }
    
}
