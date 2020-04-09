import java.util.Scanner;
import java.util.Arrays;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        char array[] = scan.next().toCharArray();
        
        if(array.length == 1){
            System.out.println(array[0]);
        }
        else{
            Arrays.sort(array);
            
            int plus = array.length / 2;
            for(int i = plus; i < array.length; i++){
                System.out.print(array[i]);
                if(i < array.length-1 ){
                    System.out.print("+");
                }
            }
            System.out.println();
        }  
     
    }
    
}
