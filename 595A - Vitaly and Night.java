import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int n = scan.nextInt();
        int m = scan.nextInt();
        
        int flat = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int a = scan.nextInt();
                int b = scan.nextInt();
                
                if(a == 1 || b == 1){
                    flat++;
                }
            }
        }
        
        System.out.println(flat);
    }
    
}
