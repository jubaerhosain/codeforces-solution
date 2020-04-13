import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int m = scan.nextInt();
        boolean head = true;
        
        for(int t = 1; t <= n; t++){
            if(t%2 == 1){
                for(int i = 0; i < m; i++){
                    System.out.print("#");
                }
            }
            else{
                if(head){
                    for(int i = 0; i < m-1; i++){
                        System.out.print(".");
                    }
                    System.out.print("#");
                    head = false;
                }
                else{
                    System.out.print("#");
                    for(int i = 0; i < m-1; i++){
                        System.out.print(".");
                    }
                    head = true;
                }
            }
            System.out.println();
        }
    }
    
    
}

