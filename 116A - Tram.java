import java.util.Scanner;
import java.util.Arrays;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int max = Integer.MIN_VALUE, sum = 0;
        
        for(int i = 0; i < n; i++){
            int a = scan.nextInt();
            int b = scan.nextInt();
            
            sum -= a;
            sum += b;
            if(sum > max){
                max = sum;
            }
        }
        
        System.out.println(max);
    }
    
}
