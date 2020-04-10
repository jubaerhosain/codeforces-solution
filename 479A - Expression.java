import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int a = scan.nextInt();
        int b = scan.nextInt();
        int c = scan.nextInt();
        
        int max = a+b+c;
        
        max = Math.max(max, a*b*c);
        max = Math.max(max, (a+b)*c);
        max = Math.max(max, a*(b+c));
        max = Math.max(max, a+b*c);
        max = Math.max(max, a*b+c);
        
        System.out.println(max);
    }
    
}
