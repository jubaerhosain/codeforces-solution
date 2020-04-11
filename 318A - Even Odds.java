import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
       long n = scan.nextLong();
       long k = scan.nextLong();
       
       if(k <= (n+1)/2){
           System.out.println(k * 2 - 1);
       }
       else{
           System.out.println( (k - (n+1)/2) * 2);
       }
    }
    
}
