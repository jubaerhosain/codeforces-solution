import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        
        int m = 0, c = 0;
        for(int i = 0; i < n; i++){
            int mi = scan.nextInt();
            int ci = scan.nextInt();
            
            if(mi > ci){
                m++;
            }
            if(mi < ci){
                c++;
            }
        }
        
        if(m > c){
            System.out.println("Mishka");
        }
        else if(m < c){
            System.out.println("Chris");
        }
        else{
            System.out.println("Friendship is magic!^^");
        }
    }
    
}

