import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        char[] string = scan.next().toCharArray();
        
        for(int k = 0, i = 1; k < n; k += i, i++){
            System.out.print(string[k]);
        }
    }
    
}
