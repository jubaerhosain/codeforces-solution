import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int test = scan.nextInt();
        
        while(test-- > 0){
            int n = scan.nextInt();
            char[] teleNo = scan.next().toCharArray();
            
            if(n < 11){
                System.out.println("NO");
            }
            else{
                boolean has = false;
                for(int i = 0; i <= n-11; i++){
                    if(teleNo[i] == '8'){
                        has = true;
                        break;
                    }
                }
                
                if(has){
                    System.out.println("YES");
                }
                else{
                    System.out.println("NO");
                }
            }
        }
    }
    
}
