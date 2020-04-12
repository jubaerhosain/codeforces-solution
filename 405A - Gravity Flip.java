import java.util.Scanner;
import java.util.Arrays;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int array[] = new int[n];
        
        for(int i = 0; i < n; i++){
            array[i] = scan.nextInt();
        }
        
        Arrays.sort(array);
        
        for(int i = 0; i < n; i++){
            System.out.print(array[i] + " ");
        }
    }
    
}
