import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int welfare[] = new int[n];
        int max = Integer.MIN_VALUE;
        
        for(int i = 0; i < n; i++){
            welfare[i] = scan.nextInt();
            
            if(welfare[i] > max){
                max = welfare[i];
            }
        }
        
        int burles = 0;
        for(int i = 0; i < n; i++){
            burles += max - welfare[i];
        }
        
        System.out.println(burles);
    }
    
}

