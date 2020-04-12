import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        
        int sum = 0;
        for(int i = 1; i <= n; i++){
            sum += scan.nextInt();
        }
        
        System.out.println((double)sum/(double)n);
    }
    
}
