import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    static String names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    
    public static void main(String args[]){
        int n = scan.nextInt();
        n--;
        
        while(n >= 5){
            n -= 5;
            n /= 2;
        }
        
        System.out.println(names[n]);
    }
    
}

