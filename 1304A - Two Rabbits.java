import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int test = scan.nextInt();
        
        while(test-- > 0){
            long x = scan.nextLong();
            long y = scan.nextLong();
            long a = scan.nextLong();
            long b = scan.nextLong();
            
            long z = y - x;
            long c = a + b;
            if(z%c == 0){
                System.out.println(z/c);
            }
            else{
                System.out.println(-1);
            }
        }
    }
    
}
