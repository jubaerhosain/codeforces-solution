import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int counter = 0;
        
        while(n-- > 0){
            int p = scan.nextInt();
            int q = scan.nextInt();
            
            if(q - p >= 2){
                counter++;
            }
        }
        
        System.out.println(counter);
    }
    
}
