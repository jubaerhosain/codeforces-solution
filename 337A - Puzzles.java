import java.util.Scanner;
import java.util.Arrays;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int m = scan.nextInt();
        int array[] = new int[m];
        
        for(int i = 0; i < m; i++){
            array[i] = scan.nextInt();
        }
        
        Arrays.sort(array);
        int min = array[n-1] - array[0];
        
        for(int i = 0; i <= m - n; i++){
            if(array[i+n-1] - array[i] < min){
                min = array[i+n-1] - array[i];
            }
        }
        
        System.out.println(min);
    }
    
}
