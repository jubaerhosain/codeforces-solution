import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int n = scan.nextInt();
        
        int a1 = 0, b1 = 0, a2 = 0, b2 = 0;
        for(int i = 0; i < n; i++){
            int t = scan.nextInt();
            int x = scan.nextInt();
            int y = scan.nextInt();
            
            if(t == 1){
                a1 += x;
                b1 += y;
            }
            else{
                a2 += x;
                b2 += y;
            }
        }
        
        String a = (a1 >= b1) ? "LIVE" : "DEAD";
        String b = (a2 >= b2) ? "LIVE" : "DEAD";
        
        System.out.println(a);
        System.out.println(b);
    }
    
}
