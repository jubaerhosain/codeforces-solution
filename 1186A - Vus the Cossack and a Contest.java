import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int m = scan.nextInt();
        int k = scan.nextInt();
        
        if(m >= n && k >= n){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }
    }
}
