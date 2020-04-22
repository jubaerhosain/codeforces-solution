import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int test = scan.nextInt();
        
        while(test-- > 0){
            int n = scan.nextInt();
            int array[] = new int[n];
        
            int sum = 0, zero = 0;
            for(int i = 0; i < n; i++){
                int num = scan.nextInt();
            
                if(num == 0){
                    zero++;
                }
                sum += num;
            }
        
            sum += zero;
            if(sum == 0){
                System.out.println(zero+1);
            }
            else{
                System.out.println(zero);
            }
        }
    }
    
}
