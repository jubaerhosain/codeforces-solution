import java.util.Scanner;
import java.util.Arrays;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int x = 0, y = 0, z = 0;
        int n = scan.nextInt();
        
        for(int i = 1; i <= n; i++){
            x += scan.nextInt();
            y += scan.nextInt();
            z += scan.nextInt();
        }
        
        if(x == 0 && y == 0 && z == 0){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
    
}
