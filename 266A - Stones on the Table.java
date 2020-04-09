import java.util.Scanner;
import java.util.Arrays;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        char[] input = scan.next().toCharArray();
        int counter = 0;
        
        for(int i = 0; i < input.length - 1; i++){
            if(input[i] == input[i+1]){
                counter++;
            }
        }
        
        System.out.println(counter);
    }
    
}
