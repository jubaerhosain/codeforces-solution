import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int a = scan.nextInt();
        int b = scan.nextInt();
        
        System.out.print(Math.min(a, b));
        System.out.print(" ");
        System.out.println(Math.abs(a-b)/2);
    }
    
    
}

