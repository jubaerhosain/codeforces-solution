import java.util.Scanner;
import java.util.Arrays;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        String input = scan.next();
        input = input.substring(0,1).toUpperCase() + input.substring(1);
        
        System.out.println(input);
    }
    
}
