import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    static int unicode[] = new int[26];
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int m = scan.nextInt();
        
        //skip newline after getting integer
        scan.nextLine();
        
        String[] input1 = scan.nextLine().split(" ");
        String[] input2 = scan.nextLine().split(" ");
        
        int query = scan.nextInt();
        
        String first, second;
        for(int i = 1; i <= query; i++){
            int year = scan.nextInt();
            int min = Math.min(m, n);
            
            first = input1[(year-1) % n];
            second = input2[(year-1) % m];
            
            System.out.println(first+second);
        }
    }
}
