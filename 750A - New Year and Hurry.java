import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int k = scan.nextInt();
       
        int duration = 240 - k;
        int start = 0, i = 1, counter = 0;
        while(start+(i*5) <= duration && i <= n){
            counter++;
            start += i*5;
            i++;
        }
       
        System.out.println(counter);
    }
    
    
}

