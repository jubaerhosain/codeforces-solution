import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    static int sign(long a){
        if(a > 0){
            return 1;
        }
        else{
            return -1;
        }
    }
    
    public static void main(String args[]){
        int test = scan.nextInt();
        
        while(test-- > 0){
            int n = scan.nextInt();
            long[] array = new long[n];
            
            for(int i = 0; i < n; i++){
                array[i] = scan.nextLong();
            }
            
            long sum = 0;
            for(int i = 0; i < n; i++){
                long current = array[i];
                int j = i;
                
                while(j < n && sign(array[i]) == sign(array[j])){
                    current = Math.max(current, array[j]);
                    j++;
                }
                sum += current;
                i = j - 1;
            }
            
            System.out.println(sum);
        }
    }
    
}
