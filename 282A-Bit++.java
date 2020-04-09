import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int x  = 0;
        
        for(int i = 0; i < n; i++){
            String operation = scan.next();
            
            if(operation.equals("++X") || operation.equals("X++")){
                x++;
            }
            else{
                --x;
            }
        }
        
        System.out.println(x);
    }
    
}
