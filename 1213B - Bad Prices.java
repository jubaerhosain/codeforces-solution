import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int test = scan.nextInt();
        
        while(test-- > 0){
            int n = scan.nextInt();
            int input[] = new int[n];
            
            for(int i = 0; i < n; i++){
                input[i] = scan.nextInt();
            }
            
            int min = input[n-1], badDay = 0;
            for(int i = n-1; i >= 0; i--){
                if(input[i] > min){
                    badDay++;
                }
                else{
                    min = input[i];
                }
            }
            
            System.out.println(badDay);
        }
    }
}
