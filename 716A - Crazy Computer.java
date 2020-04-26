import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int n = scan.nextInt();
        long c = scan.nextLong();
        long second[] = new long[n];
        
        int counter = 1;
        long prev = scan.nextLong(); 
        for(int i = 1; i < n; i++){
            long next = scan.nextLong();
            
            if(next-prev <= c){
                counter++;
            }
            else{
                counter = 1;
            }
            prev = next;
        }
        
        System.out.println(counter);
    }
    
}
