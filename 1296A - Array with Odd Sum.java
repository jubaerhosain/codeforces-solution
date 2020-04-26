import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int test = scan.nextInt();
        
        while(test-- > 0){
            int n = scan.nextInt();
            
            int even = 0, odd = 0;
            for(int i = 0; i < n; i++){
                int num = scan.nextInt();
                if(num%2 == 0){
                    even++;
                }
                else{
                    odd++;
                }
            }
            
            if(even == n || (n%2 == 0 && odd == n)){
                System.out.println("NO");
            }
            else{
                System.out.println("YES");
            }
        }
    }
    
}
