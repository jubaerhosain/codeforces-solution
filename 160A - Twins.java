import java.util.Scanner;
import java.util.Arrays;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n, sequence[], sum1 = 0, sum2 = 0, counter = 0;
        
        n = scan.nextInt();
        sequence = new int[n];
        
        for(int i = 0; i < n; i++){
            sequence[i] = scan.nextInt();
            sum1 += sequence[i];
        }
        
        Arrays.sort(sequence);
        
        for(int i = n - 1; i >= 0; i--){
            sum2 += sequence[i];
            sum1 -= sequence[i];
            counter++;
            
            if(sum2 > sum1){
                break;
            }
        }
        
        System.out.println(counter);
    }
    
}
