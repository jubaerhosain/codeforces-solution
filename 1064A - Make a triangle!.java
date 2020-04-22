import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int[] sticks = new int[3];
        
        for(int i = 0; i < 3; i++){
            sticks[i] = scan.nextInt();
        }
        
        Arrays.sort(sticks);
        
        if(sticks[2] < sticks[0] + sticks[1]){
            System.out.println(0);
        }
        else{
            System.out.println(sticks[2] - (sticks[0] + sticks[1]) + 1);
        }
    }
    
}
