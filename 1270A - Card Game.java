import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int test = scan.nextInt();
        
        while(test-- > 0){
            int n = scan.nextInt();
            int k1 = scan.nextInt();
            int k2 = scan.nextInt();
            
            int p1 = 0, p2 = 0;
            for(int i = 0; i < k1; i++){
                int value = scan.nextInt();
                
                if(value > p1){
                    p1 = value;
                }
            }
            
            for(int i = 0; i < k2; i++){
                int value = scan.nextInt();
                
                if(value > p2){
                    p2 = value;
                }
            }
            
            if(p1 > p2){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
    }
    
}
