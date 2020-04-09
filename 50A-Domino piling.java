import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int m = scan.nextInt();
        int n = scan.nextInt();
        int result = 0;
        
        if(m == 2){
            result = n;
        }
        else{
            if(m%2 == 0){
                result = (m/2) * n;
            }
            else{
                result = (m/2) * n + (n/2);
            }
        }
        
        System.out.println(result);
    }
    
}
