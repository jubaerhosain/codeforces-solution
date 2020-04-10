import java.util.Scanner;
import java.util.Arrays;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int k = scan.nextInt();
        long n = scan.nextLong();
        int w = scan.nextInt();
        
        long sum = 0;
        for(int i = 1; i <= w; i++){
            sum += (i*k);
        }
        
        if(n >= sum){
            System.out.println(0);
        }
        else{
            System.out.println(sum-n);
        }
    }
    
}
