import java.util.Scanner;
import java.util.Arrays;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    static int[] counter = new int[5];
    
    public static void main(String args[]){
        int n = scan.nextInt();
        
        for(int i = 0; i < n; i++){
            counter[scan.nextInt()]++;
        }
        
        
        int totalTaxi = counter[4]+counter[3]+(counter[2]/2);
        counter[1] -= counter[3];
        
        if(counter[2] % 2 == 1){
            totalTaxi += 1;
            counter[1] -= 2;
        }
        if(counter[1] > 0){
            totalTaxi += ((counter[1]+3)/4);
        }
        
        System.out.println(totalTaxi);
        
    }
    
}
