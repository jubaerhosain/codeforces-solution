import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int test = scan.nextInt();
        
        while(test-- > 0){
            int h = scan.nextInt();
            int m  = scan.nextInt();
            
            int n = 24-h;
            System.out.println(n*60 - m);
        }
    }
    
}
