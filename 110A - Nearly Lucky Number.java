import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        long n = scan.nextLong();
        int counter = 0;
        
        while(n != 0){
            if(n%10 == 4 || n%10 == 7){
                counter++;
            }
            n /= 10;
        }
        
        if(counter == 4 || counter == 7){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
        
    }
    
}
