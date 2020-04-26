import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int test = scan.nextInt();
        
        while(test-- > 0){
            int x = scan.nextInt();
            int a = 0, b = 0;
            
            if(x%2 == 0){
                a = b = x/2;
            }
            else{
                a = x-1;
                b = 1;
            }
            
            System.out.println(a + " " + b);
        }
    }
    
}
