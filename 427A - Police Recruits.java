import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        
        int police = 0, counter = 0;
        for(int i = 1; i <= n; i++){
            int input = scan.nextInt();
            
            if(input > -1){
                police += input;
            }
            else{
                if(police == 0){
                    counter++;
                }
                else if(input == -1 && police > 0){
                    police--;
                }
            }
            
                
        }
        
        System.out.println(counter);
    }
    
}

