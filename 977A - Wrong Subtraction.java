import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        long n = scan.nextLong();
        int k = scan.nextInt();
        
        for(int i = 0; i < k; i++){
            int rem = (int)n%10;
            if(rem == 0){
                n = n/10;
            }
            else{
                n--;
            }
        }
        
        System.out.println(n);
    }
    
}
