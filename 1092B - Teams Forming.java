import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int[] score = new int[n];
        
        for(int i = 0; i < n; i++){
            score[i] = scan.nextInt();
        }
        
        Arrays.sort(score);
        
        int counter = 0;
        for(int i = 0; i < n-1; i += 2){
            counter += (score[i+1] - score[i]);
        }
        
        System.out.println(counter);
    }
    
}
