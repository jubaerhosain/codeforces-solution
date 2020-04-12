import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int even = 0, odd = 0, evenPos = 0, oddPos = 0;
        
        for(int i = 1; i <= n; i++){
            int number = scan.nextInt();
            
            if(number%2 == 0){
                even += 1;
                evenPos = i;
            }
            else{
                odd += 1;
                oddPos = i;
            }
        }
        
        if(even > odd){
            System.out.println(oddPos);
        }
        else{
            System.out.println(evenPos);
        }
    }
    
}
