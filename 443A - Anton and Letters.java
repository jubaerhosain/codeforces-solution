import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    static int[] unicode = new int[256];
    
    public static void main(String args[]){
        char[] array = scan.nextLine().toCharArray();
        
        for(int i = 0; i < array.length; i++){
            unicode[array[i]]++;
        }
        
        int counter = 0;
        for(int i = 97; i <= 122; i++){
            if(unicode[i] >= 1){
                counter++;
            }
        }
        
        System.out.println(counter);
    }
    
}
