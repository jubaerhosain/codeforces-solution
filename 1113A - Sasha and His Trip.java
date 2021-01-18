import java.util.*;

public class Solution {
    private static Scanner scan = new Scanner(System.in);

    public static void main(String args[]) {
       int n = scan.nextInt()-1;
       int w = scan.nextInt();
       
       if(w >= n) {
           System.out.println(n);
           return;
       }
       
       int i = 1;
       int cost = w;
       int d = n-w;
       while(d-- > 0) {
           i++;
           cost += i;
       }
       
       System.out.println(cost);
    }
}













