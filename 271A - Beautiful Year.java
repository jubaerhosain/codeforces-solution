import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        
        while(true){
            n++;
            int a = n/1000;
            int b = n/100 % 10;
            int c = n/10 % 10;
            int d = n%10;
            
            if(a != b && a != c && a != d && b != c && b != d && c != d){
                System.out.println(n);
                break;
            }
        }
    }
    
}
