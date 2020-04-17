import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        
        if(n%2 == 0){
            System.out.println(n/2);
            
            for(int i = 0; i < n/2; i++){
                System.out.print(2 + " ");
            }
        }
        else{
            System.out.println(n/2);
            
            for(int i = 0; i < (n/2)-1; i++){
                System.out.print(2 + " ");
            }
            System.out.println(3);
        }
    }
    
}

