import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int s = scan.nextInt();
        int v1 = scan.nextInt();
        int v2 = scan.nextInt();
        int t1 = scan.nextInt();
        int t2 = scan.nextInt();
        
        int a = v1 * s + t1 * 2;
        int b = v2 * s + t2 * 2;
        
        if(a < b){
            System.out.println("First");
        }
        else if(a > b){
            System.out.println("Second");
        }
        else{
            System.out.println("Friendship");
        }
    }
    
}
