import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
       int n = scan.nextInt();
       String ans = "EASY";
       
       while(n-- > 0){
           int a = scan.nextInt();
           if(a == 1){
               ans = "HARD";
           }
       }
       
       System.out.println(ans);
    }
    
}
