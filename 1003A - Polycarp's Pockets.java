import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int[] count = new int[101];
        
        int n = scan.nextInt();
        int max = 0;
        for(int i = 0; i < n; i++){
            int num = scan.nextInt();
            count[num]++;
            
            if(count[num] > max){
                max = count[num];
            }
        }
        
        System.out.println(max);
    }
    
}
