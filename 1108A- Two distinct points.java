import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int q = scan.nextInt();
        
        while(q-- > 0){
            int l1 = scan.nextInt();
            int r1 = scan.nextInt();
            int l2 = scan.nextInt();
            int r2 = scan.nextInt();
            
            if(l1 != l2){
                System.out.println(l1 + " " + l2);
            }
            else if(l1 != r2){
                System.out.println(l1 + " " + r2);
            }
            else if(r1 != l2){
                System.out.println(r1 + " " + l2);
            }
            else if(r1 != r2){
                System.out.println(l1 + " " + r2);
            }
        }
    }
    
}
