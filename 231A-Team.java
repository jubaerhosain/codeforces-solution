import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int canSolve = 0;
        
        int a, b, c;
        for(int i = 0; i < n; i++){
           a = scan.nextInt();
           b = scan.nextInt();
           c = scan.nextInt();
           
           if(a+b+c > 1){
               canSolve++;
           }
        }
        
        System.out.println(canSolve);    
    }
    
}
