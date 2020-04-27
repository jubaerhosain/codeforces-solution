import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String []args){
        int n , m, max1 = Integer.MIN_VALUE, max2 = Integer.MIN_VALUE;
        
        n = scan.nextInt();
        for(int i = 0; i < n; i++){
            int input = scan.nextInt();
            
            if(max1 < input){
                max1 = input;
            }
        }
        
        m = scan.nextInt();
        for(int i = 0; i < m; i++){
            int input = scan.nextInt();
            
            if(max2 < input){
                max2 = input;
            }
        }
        
        System.out.println(max1 + " " + max2);
    }
}
