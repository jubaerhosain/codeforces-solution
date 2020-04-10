import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int array[] = new int[n+1];
        
        
        for(int i = 1; i <= n; i++){
            array[scan.nextInt()] = i;
        }
        
        for(int i = 1; i <= n; i++){
            System.out.print(array[i] + " ");
        }
        
    }
    
}
