import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int testCase = scan.nextInt();
        
        while(testCase-- > 0){
            int b = scan.nextInt();
            int p = scan.nextInt();
            int f = scan.nextInt();
            
            int h = scan.nextInt();
            int c = scan.nextInt();
            
            if(h > c){
                int numberOfHam = Math.min(b/2, p);
                b -= numberOfHam*2;
                
                int numberOfCh = Math.min(b/2, f);
                
                System.out.println(numberOfHam*h + numberOfCh*c);
            }
            else{
                int numberOfCh = Math.min(b/2, f);
                b -= numberOfCh*2;
                
                int numberOfHam = Math.min(b/2, p);
                
                System.out.println(numberOfHam*h + numberOfCh*c);
            }
            
        }
    }
    
}
