import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int a = scan.nextInt();
        int b = scan.nextInt();
        
        int sum = a;
        while(a >= b){
            sum += a/b;
            a = (a/b) + (a%b);
        }
        
        System.out.println(sum);
    }
    
}

