import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int k = scan.nextInt();
        int l = scan.nextInt();
        int m = scan.nextInt();
        int n = scan.nextInt();
        int d = scan.nextInt();
        
        int counter = 0;
        for(int i = 1; i <= d; i++){
            if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0){
                counter++;
            }
        }
        
        System.out.println(counter);
    }
    
}
