import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
            
        if(n%4 == 0){
            System.out.println("1 A");
        }
        else if(n%4 == 1){
            System.out.println("0 A");
        }
        else if(n%4 == 2){
            System.out.println("1 B");
        }
        else{
            System.out.println("2 A");
        }
    }
    
}
