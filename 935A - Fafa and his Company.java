import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        
        int counter = 0;
        for(int i = 1; i <= n/2; i++){
            if(n % i == 0){
                counter++;
            }
        }
        
        System.out.println(counter);
    }
}
