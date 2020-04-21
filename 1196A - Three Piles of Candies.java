import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        long[] array = new long[3];
        int test = scan.nextInt();
        
        while(test-- > 0){
            array[0] = scan.nextLong();
            array[1] = scan.nextLong();
            array[2] = scan.nextLong();
            
            Arrays.sort(array);
            
            long alice = array[2] - (array[2] - (array[0]+array[1]))/2;
            long bob = array[0]+array[1] + (array[2] - (array[0]+array[1]))/2;
            
            System.out.println(Math.min(alice, bob));
        }
    }
    
}
