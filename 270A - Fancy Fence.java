import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int t = scan.nextInt();
        
        int a;
        while(t-- > 0){
            a = scan.nextInt();
            
            if(360 % (180-a) == 0){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
    }
    
}

