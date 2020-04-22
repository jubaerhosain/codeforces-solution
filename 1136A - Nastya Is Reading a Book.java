import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int[] pages = new int[2*n];
        
        for(int i = 0; i < 2*n; i++){
            pages[i] = scan.nextInt();
        }
        
        int k = scan.nextInt();
        
        int read = 0;
        for(int i = 1; i < (2*n); i+=2){
            if(k <= pages[i]){
                break;
            }
            read++;
        }
        
        System.out.println(n-read);
    }
    
}
