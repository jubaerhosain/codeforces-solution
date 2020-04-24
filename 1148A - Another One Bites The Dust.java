import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        long a = scan.nextLong();
        long b = scan.nextLong();
        long c = scan.nextLong();
        
        if(a == b){
            System.out.println(a+b+(2*c));
        }
        else{
            long min = Math.min(a,b);
            System.out.println(1 + (2*min)+(2*c));
        }
    }
    
}
