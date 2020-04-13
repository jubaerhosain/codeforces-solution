import java.util.Scanner;
import java.util.Arrays;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int array[] = new int[4];
        
        for(int i = 0; i < 4; i++){
            array[i] = scan.nextInt();
        }
        
        Arrays.sort(array);
        
        int counter = 0;
        for(int i = 0; i < 3; i++){
            if(array[i] == array[i+1]){
                counter++;
            }
        }
        
        System.out.println(counter);
    }
    
}
