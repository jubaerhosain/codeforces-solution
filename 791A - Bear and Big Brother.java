import java.util.Scanner;
import java.util.Arrays;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int a = scan.nextInt();
        int b = scan.nextInt();
        
        int counter = 0;
        
        while(a <= b){
            a *= 3;
            b *= 2;
            counter++;
        }
        
        System.out.println(counter);
    }
    
}
