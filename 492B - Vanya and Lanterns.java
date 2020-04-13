import java.util.Scanner;
import java.util.Arrays;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int l = scan.nextInt();
        int array[] = new int[n];
        
        for(int i = 0; i < n; i++){
            array[i] = scan.nextInt();
        }
        
        Arrays.sort(array);
        
        double d = 0;
        for(int i = 0; i < n-1; i++){
            if(array[i+1] - array[i] > d){
                d = array[i+1] - array[i];
            }
        }
        
        int end = (array[0] > l-array[n-1]) ? array[0] : l-array[n-1];
        
        if(d > end*2){
            System.out.println(d/2);
        }
        else{
            System.out.println(end);
        }
    }
    
}
