import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
       int n = scan.nextInt();
       int m = scan.nextInt();
       
       int sum = n, a, b;
       while(n >= m){
           sum += n/m;
           n = (n/m) + (n%m);
       }
       
       System.out.println(sum);
    }
    
    
}

