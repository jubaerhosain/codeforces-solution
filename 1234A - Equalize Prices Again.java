import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String []args){
        int q = scan.nextInt();
        
        while(q-- > 0){
            int n = scan.nextInt();
        
            double sum = 0;
            for(int i = 0; i < n; i++){
                sum += scan.nextInt();
            }
        
            System.out.println((int)Math.ceil(sum/n));
        }
    }
    
}
